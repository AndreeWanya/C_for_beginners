#include <stdio.h>

int rusDel(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", rusDel(a, b));
    return 0;
}

int rusDel(int a, int b) {
    if (a == 0) {
        return 1;
    }

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
    int res = rusDel(a, b / 2);
    new_res = new_res + res;
    printf("%d %d %d %d\n", res, a / 2, ost, new_res);
    return new_res;
}