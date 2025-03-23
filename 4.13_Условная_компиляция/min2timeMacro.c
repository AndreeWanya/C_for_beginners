#include <stdio.h>

#define min2time(mm, hres, mres) ((hres) = ((mm) / 60) % 24), ((mres) = (mm) % 60)

int main() {
    int h, m, mm;
    scanf("%d", &mm);

    min2time(mm, h, m);
    printf("%02d:%02d\n", h, m);

    min2time(mm+65, h, m);
    printf("%02d:%02d\n", h, m);

    return 0;
}