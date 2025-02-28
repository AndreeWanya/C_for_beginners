#include <stdio.h>

float fahr(int cel);
float celsius(int fahr);

int main() {
    int cel;    // градусы Цельсия
    float f;    // градусы Фаренгейта

    scanf("%d", &cel);
    f = fahr(cel);
    printf("%.2f\n", f);    // .2f - печатать с точностью до 2 знаков после .

    scanf("%d", &cel);
    f = celsius(cel);
    printf("%.4f\n", f);

    return 0;
}

float fahr(int cel) {
    float result;
    result = (float)cel * 9 / 5 + 32;

    return result;
}

float celsius(int fahr) {
    float result;
    result = (float)(fahr - 32) * 5 / 9;

    return result;
}