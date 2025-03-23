#include <stdio.h>

int rusDel(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", rusDel(a, b));
    return 0;
}

int rusDel(int a, int b) {
    if (a == b) {
        printf("1\n");
        return 1;
    }
    int mult, rem;
    if (a % 2 == 0) {
        a = a / 2;
        mult = 2;
        rem = 0;
    } else {
        a = a - b;
        mult = 1;
        rem = 1;
    }
    printf("%d %d %d\n", a, mult, rem);
    int part = rusDel(a, b);
    int new_part = part * mult + rem;
    printf("%d * %d + %d = %d\n", part, mult, rem, new_part);
    return new_part;
}