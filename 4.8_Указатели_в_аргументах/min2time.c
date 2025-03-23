
#include <stdio.h>

void min2time(int mm, int *ph, int *pm);

int main() {
    int mm, h, m;
    scanf("%d", &mm);

    min2time(mm, &h, &m);

    printf("%02d:%02d\n", h, m);

    return 0;
}

void min2time(int mm, int *ph, int *pm) {
    *ph = mm / 60;
    *ph = *ph % 24;
    *pm = mm % 60;
}