struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};

void move(struct Rect * p, int dx);

#include <stdio.h>

int main() {
    struct Rect b;
    b.lt.x = -7;
    b.lt.y = 5;
    b.rb.x = 12;
    b.rb.y = 8;

    printf("%d %d %d %d", b.lt.x, b.lt.y, b.rb.x, b.rb.y);
    int dx = -6;
    move(&b, dx);
    printf(" + %d = %d %d %d %d", dx, b.lt.x, b.lt.y, b.rb.x, b.rb.y);

    return 0;
}

void move(struct Rect * p, int dx) {
    p->lt.x = p->lt.x + dx;
    p->rb.x = p->rb.x + dx;
}