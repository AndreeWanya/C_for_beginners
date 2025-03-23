#include <stdio.h>

void rotateC(int *x1, int *y1, int *x2, int *y2);

int main() {
    int xlt, ylt, xrb, yrb;

    scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);
    rotateC(&xlt, &ylt, &xrb, &yrb);
    printf("%d %d %d %d", xlt, ylt, xrb, yrb);

    return 0;
}

void rotateC(int *x1, int *y1, int *x2, int *y2) {
    int x = (*x1 + *x2) / 2;
    int y = (*y1 + *y2) / 2;
    int dx = (*x2 - *x1) / 2;
    int dy = (*y1 - *y2) / 2;

    *x1 = x - dy;
    *y1 = y + dx;
    *x2 = x + dy;
    *y2 = y - dx;
}