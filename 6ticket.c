#include <stdio.h>

void print_revers(int x);

int main() {
    int num;
    scanf("%d", &num);
    print_revers(num);

    return 0;
}

void print_revers(int x) {
    printf("%d", x % 10);
    printf("%d", (x / 10) % 10);
    printf("%d", (x / 100) % 10);
    printf("%d", (x / 1000) % 10);
    printf("%d", (x / 10000) % 10);
    printf("%d\n", (x / 100000));
}