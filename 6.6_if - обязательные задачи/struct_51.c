#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt; // левая верхняя вершина
    struct Point rb; // правая нижняя вершина
};

struct Rect * max(struct Rect * pa, struct Rect * pb);
int square(struct Rect max);

int main() {
    struct Rect a, b;

    scanf("%d%d%d%d", &a.lt.x, &a.lt.y, &a.rb.x, &a.rb.y);
    scanf("%d%d%d%d", &b.lt.x, &b.lt.y, &b.rb.x, &b.rb.y);

    struct Rect result = *max(&a, &b);
    printf("%d", square(result));

    return 0;
}

struct Rect * max(struct Rect * pa, struct Rect * pb) {
    if (square(*pa) > square(*pb)) {
        return pa;
    } else {
        return pb;
    }
}

int square(struct Rect max) {
    return ((max.rb.x - max.lt.x) * (max.lt.y - max.rb.y));
}