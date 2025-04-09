#include <stdio.h>

int main() {
    unsigned int n, k_rice, k_veg, res;

    scanf("%d%d%d", &n, &k_rice, &k_veg);
    printf("%d %d %d\n", n, k_rice, k_veg);

    res = k_rice + k_veg * 2;
    printf("%d\n", res);

    if (res < n) {
        printf("YES\n");
    }

    return 0;
}