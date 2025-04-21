#include <stdio.h>

int main() {
    int L;      // Прошли в первый день
    int k;      // Каждый день проходили на k км больше
    int s;      // Сколько километров до цели
    int day = 0;    // Сколько дней идем
    int dist = 0;   // Прошли всего

    scanf("%d%d%d", &L, &k, &s);

    while (dist < s) {
        day += 1;
        if (day != 1) {
            L += k;
        }
        dist += L;
    }

    printf("%d\n", day);

    return 0;
}