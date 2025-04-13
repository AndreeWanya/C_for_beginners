#include <stdio.h>
#include <assert.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt; // левая верхняя вершина
    struct Point rb; // правая нижняя вершина
};

int is_crossed(struct Rect a, struct Rect b);
struct Rect intersection(struct Rect a, struct Rect b);

int main() {
    #ifdef AAA
    struct Rect r = {{-7, 8}, {12, 5}};
    struct Rect rr = {{1, 9}, {14, 3}};
    assert(1 == is_crossed(r, rr));

    struct Rect t = {{-7, 8}, {12, 5}};
    struct Rect tt = {{13, 9}, {14, 3}};
    assert(0 == is_crossed(t, tt));

    struct Rect n = {{1, 9}, {14, 3}};
    struct Rect nn = {{-7, 18}, {12, 5}};
    assert(1 == is_crossed(n, nn));
    #endif

    struct Rect a, b;
    scanf("%d%d%d%d", &a.lt.x, &a.lt.y, &a.rb.x, &a.rb.y);
    scanf("%d%d%d%d", &b.lt.x, &b.lt.y, &b.rb.x, &b.rb.y);

    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y);

    struct Rect res;
    if (is_crossed(a, b)) {
        res = intersection(a, b);
    }

    printf("%d %d %d %d\n", res.lt.x, res.lt.y, res.rb.x, res.rb.y);

    return 0;
}

int is_crossed(struct Rect a, struct Rect b) {
    if (((a.lt.x >= b.lt.x && a.lt.x <= b.rb.x) || (a.rb.x >= b.lt.x && a.rb.x <= b.rb.x)) &&   // Не учитывается вариант, что b полностью находится в a
        ((a.lt.y <= b.lt.y && a.lt.y >= b.rb.y) || (a.rb.y <= b.lt.y && a.rb.y >= b.rb.y))) {
        return 1;
    }
    
    if (((b.lt.x >= a.lt.x && b.lt.x <= a.rb.x) || (b.rb.x >= a.lt.x && b.rb.x <= a.rb.x)) &&   // Теперь учитывается
        ((b.lt.y <= a.lt.y && b.lt.y >= a.rb.y) || (b.rb.y <= a.lt.y && b.rb.y >= a.rb.y))) {
        return 1;
    }

    return 0;
}

struct Rect intersection(struct Rect a, struct Rect b) {
    struct Rect result;
    if ((a.lt.x >= b.lt.x && a.lt.x <= b.rb.x) && (a.rb.x >= b.lt.x && a.rb.x <= b.rb.x)) {
        result.lt.x = a.lt.x;
        result.rb.x = a.rb.x;
    } else if (a.lt.x >= b.lt.x && a.lt.x <= b.rb.x) {
        result.lt.x = a.lt.x;
        result.rb.x = b.rb.x;
    } else if (a.rb.x >= b.lt.x && a.rb.x <= b.rb.x) {
        result.rb.x = a.rb.x;
        result.lt.x = b.lt.x;
    } else {
        result.lt.x = b.lt.x;
        result.rb.x = b.rb.x;
    }

    if ((a.lt.y <= b.lt.y && a.lt.y >= b.rb.y) && (a.rb.y <= b.lt.y && a.rb.y >= b.rb.y)) {
        result.lt.y = a.lt.y;
        result.rb.y = a.rb.y;
    } else if (a.lt.y <= b.lt.y && a.lt.y >= b.rb.y) {
        result.lt.y = a.lt.y;
        result.rb.y = b.rb.y;
    } else if (a.rb.y <= b.lt.y && a.rb.y >= b.rb.y) {
        result.lt.y = b.lt.y;
        result.rb.y = a.rb.y;
    } else {
        result.lt.y = b.lt.y;
        result.rb.y = b.rb.y;
    }

    return result;
}