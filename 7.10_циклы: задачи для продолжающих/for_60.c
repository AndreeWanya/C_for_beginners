#include <stdio.h>

int main() {
    int d, k;
    int result = 0;

    scanf("%d%d", &d, &k);
    printf("%d %d ", d, k);

    while (k > 0) {
        if (k % 10 == d) {
            result++;
        }
        k = k / 10;
    }

    printf("%d\n", result);
    
    return 0;
}