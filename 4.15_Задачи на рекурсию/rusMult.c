#include <stdio.h>

int rusMult(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", rusMult(a, b));
    return 0;
}

int rusMult(int a, int b) {
    if (b == 1) {
        printf("%d %d\n", a, b);
        printf("%d\n", a);
        return a;
    }
    printf("%d %d\n", a, b);
    int ost = b % 2;
    int new_res = 0;
    if (ost == 1) {
        new_res = a;
    }
    a = a * 2;
    int res = rusMult(a, b / 2);
    new_res = new_res + res;
    printf("%d %d %d %d\n", res, a / 2, ost, new_res);
    return new_res;
}