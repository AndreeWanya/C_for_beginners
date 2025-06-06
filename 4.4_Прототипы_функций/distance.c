#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2);  // функция вычисляет расстояние между двумя точками

int main() {
   int x1, y1, x2, y2;            // координаты точек
   float len;                     // длина

   scanf("%d%d", &x1, &y1);       // прочитали числа
   scanf("%d%d", &x2, &y2);
   len = dist(x1, y1, x2, y2);    // вызываем функцию dist
   printf("%.3f\n", len);         // напечатать длину
   
   return 0;
}

float dist(int x1, int y1, int x2, int y2) {
    float result;
    float x = x1 - x2;
    float y = y1 - y2;
    result = sqrt(x * x + y * y);

    return result;
}