#include <stdio.h>

void mirror(int *px, int *py);

int main() {
    int x, y;
    int *px = &x;
    int *py = &y;

    scanf("%d%d", px, py);
    mirror(px, py);
    printf("%d %d", x, y);

    return 0;
}

void mirror(int *px, int *py) {
    *px = - (*px);
    *py = *py;
}