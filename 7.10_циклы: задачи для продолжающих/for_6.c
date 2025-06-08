#include <stdio.h>

int main() {
    int d, k;
    int result = 0;

    scanf("%d", &d);
    printf("%d ", d);

    while ((k = getchar()) != EOF) {
        if (k == 32) {
            continue;
        } else if (k == 10) {
            break;
        }
        if (k - 48 == d) {
            result++;
        }
        printf("%d", k - 48);
    }

    printf(" %d\n", result);
    
    return 0;
}