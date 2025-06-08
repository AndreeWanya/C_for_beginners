#include <stdio.h>

int degree(int, int);

int main() {
    int n, k;
    int result = 1;
    int divider = 2;

    scanf("%d%d", &n, &k);

    while (1) {
        if (n == degree(divider, k)) {
            n = n / degree(divider, k);
            printf("%d %d\n", divider, n);
            result *= divider;
            printf("%d\n", result);
            break;
        } else if (degree(divider, k) > n) {
            printf("-1\n");
            break;
        } else if (n % degree(divider, k) != 0) {
            divider++;
        } else {
            n = n / degree(divider, k);
            printf("%d %d\n", divider, n);
            result *= divider;
        }
    }

    return 0;
}

int degree(int divider, int k) {
    int result = divider;
    for (int i = 0; i < k - 1; i++) {
        result *= divider;
    }
    return result;
}