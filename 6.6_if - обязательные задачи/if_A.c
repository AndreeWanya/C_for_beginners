#include <stdio.h>

int main() {
    float x, y;

    scanf("%f%f", &x, &y);

    printf((y <= (3 + x) && y <= (3 - x) && y >= -2) ? "YES" : "NO");
    return 0;
}