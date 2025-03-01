#include <stdio.h>

void move(int *px, int *py, int dx, int dy);

int main() {
    int x, y, dx, dy;
    int *px = &x;
    int *py = &y;

    scanf("%d%d%d%d", px, py, &dx, &dy);
    move(px, py, dx, dy);
    printf("%d %d", x, y);

    return 0;
}

void move(int *px, int *py, int dx, int dy) {
    *px = *px + dx;
    *py = *py + dy;
}