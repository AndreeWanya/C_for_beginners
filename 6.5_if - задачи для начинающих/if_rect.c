#include <stdio.h>

int main() {
    float x, y;

    scanf("%f%f", &x, &y);

    printf((-3 <= x && x <= 2 && -4 <= y && y <= 6) ? "YES\n" : "NO\n");

    return 0;
}