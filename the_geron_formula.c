#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2);  // функция вычисляет расстояние между двумя точками
float area(int x1, int y1, int x2, int y2, int x3, int y3);  // функция вычисляет площадь треугольника по 3 точкам

int main() {
    int x1, y1, x2, y2, x3, y3;     // координаты точек
    float square;                   // площадь
    scanf("%d%d", &x1, &y1);        // прочитали числа
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);
    square = area(x1, y1, x2, y2, x3, y3);
    
    printf("%.3f\n", square);          // напечатать длину
    
    return 0;
}

float dist(int x1, int y1, int x2, int y2) {
    float result;
    float x = x1 - x2;
    float y = y1 - y2;
    result = sqrt(x * x + y * y);

    return result;
}

float area(int x1, int y1, int x2, int y2, int x3, int y3) {
    float a, b, c, p, result;                 // длины сторон треугольника
    a = dist(x1, y1, x2, y2);                 // вызываем функцию dist для вычисления стороне треугольника a, b, c 
    b = dist(x1, y1, x3, y3);
    c = dist(x3, y3, x2, y2);
    p = (a + b + c) / 2;
    result = sqrt(p * (p - a) * (p - b) * (p -c));

    return result;
}