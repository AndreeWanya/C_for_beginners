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
    printf("%d\n", is_crossed(a, b));

    return 0;
}

int is_crossed(struct Rect a, struct Rect b) {
    if (((a.lt.x >= b.lt.x && a.lt.x <= b.rb.x) || (a.rb.x >= b.lt.x && a.lt.x <= b.rb.x)) && 
        ((a.lt.y <= b.lt.y && a.lt.y >= b.rb.y) || (a.rb.y <= b.lt.y && a.lt.y >= b.rb.y))) {
            return 1;
        }
    return 0;
}