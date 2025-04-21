#include <stdio.h>

int main() {
    int s;      // Сантиметров до стены
    int L;      // Первый шаг робота, см
    int k;      // Каждый следующий шаг меньше на, см
    int dist;   // Сантиметров осталось до стены
    int step = 0;   // Шагов сделано

    scanf("%d%d%d", &s, &L, &k);
    dist = s;

    while (dist >= L) {
        step += 1;
        dist -= L;
        L -= k;
        if (L <= 0) {
            break;
        }
    }

    printf("%d %d\n", step, dist);

    return 0;
}