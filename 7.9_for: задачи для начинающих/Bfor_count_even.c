#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            sum += 1;
        }
    }

    printf("%d\n", sum);
}