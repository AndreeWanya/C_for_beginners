struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

int area(struct Rect a) {
    return (a.width * a.height);
}

#include <stdio.h>

int main() {
    struct Rect a;
    a.x = -7;
    a.y = 5;
    a.width = 12;
    a.height = 8;

    int rect_area = area(a);

    printf("%d %d %d %d %d\n", a.x, a.y, a.width, a.height, rect_area);

    return 0;
}