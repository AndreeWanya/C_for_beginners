#include <stdio.h>

void mirror_seg(int *px1, int *py1, int *px2, int *py2);

int main() {
    int x1, y1, x2, y2;
    int *px1 = &x1;
    int *py1 = &y1;
    int *px2 = &x2;
    int *py2 = &y2;

    scanf("%d%d%d%d", px1, py1, px2, py2);
    mirror_seg(px1, py1, px2, py2);
    printf("%d %d %d %d", x1, y1, x2, y2);

    return 0;
}

void mirror_seg(int *px1, int *py1, int *px2, int *py2) {
    *px1 = *px1;
    *py1 = - (*py1);
    *px2 = *px2;
    *py2 = - (*py2);
}