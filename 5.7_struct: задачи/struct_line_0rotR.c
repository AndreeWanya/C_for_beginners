typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point a;    // начало отрезка
    Point b;    // конец отрезка
    float len;  // длина отрезка
} Line;

#include <stdio.h>
#include <math.h>

float distance(Point a, Point b);   // расстояние между точками
void scanLine(Line * t);
void printLine(Line t);
void rotRLine(Line * t);

int main() {
    Line t;

    scanLine(&t);
    rotRLine(&t);
    printLine(t);

    return 0;
}

float distance(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void scanLine(Line * t) {
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    t->a.x = x1;
    t->a.y = y1;
    t->b.x = x2;
    t->b.y = y2;
}

void printLine(Line t) {
    float dist = distance(t.a, t.b);
    printf("%d %d %d %d %0.3f", t.a.x, t.a.y, t.b.x, t.b.y, dist);
}

void rotRLine(Line * t) {
    int temp = t->a.x;
    t->a.x = t->a.y;
    t->a.y = -temp;
    temp = t->b.x;
    t->b.x = t->b.y;
    t->b.y = -temp;
}