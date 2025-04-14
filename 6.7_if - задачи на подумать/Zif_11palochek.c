#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);    // Вводим количество палочек

    if (n % 4 == 0) {
        printf("3");
    } else if (n % 4 == 1) {
        printf("-1");
    } else if (n % 4 == 2) {
        printf("1");
    } else {
        printf("2");
    }

    return 0;
}