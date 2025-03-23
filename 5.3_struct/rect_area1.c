struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};

int area(struct Rect a);

#include <stdio.h>

int main() {
    struct Rect b;
    b.lt.x = -7;
    b.lt.y = 5;
    b.rb.x = 5;
    b.rb.y = -3;

    printf("%d %d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y, area(b));

    return 0;
}

int area(struct Rect a) {
    return ((a.rb.x - a.lt.x) * (a.lt.y - a.rb.y));
}