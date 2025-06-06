#include <stdio.h>

int main() {
    int n;
    int min;

    scanf("%d", &n);
    scanf("%d", &min);

    for (int i = 0; i < n - 1; i++) {
        int num;
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }

    printf("%d\n", min);

    return 0;
}