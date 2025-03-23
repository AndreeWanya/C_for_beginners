struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

void move(struct Rect * p, int dx);

#include <stdio.h>

int main() {
    struct Rect a;
    a.x = -7;
    a.y = 5;
    a.width = 12;
    a.height = 8;

    printf("%d %d %d %d", a.x, a.y, a.width, a.height);
    int dx = -6;
    move(&a, dx);
    printf(" + %d = %d %d %d %d", dx, a.x, a.y, a.width, a.height);

    return 0;
}

void move(struct Rect * p, int dx) {
    p->x = p->x + dx;
}