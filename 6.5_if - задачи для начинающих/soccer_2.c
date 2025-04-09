#include <stdio.h>

int main() {
    unsigned int a1, b1, a2, b2;

    scanf("%d:%d", &a1, &b1);
    scanf("%d:%d", &a2, &b2);
    printf("%d:%d\n", a1 + a2, b1 + b2);

    if ((a1 + a2) > (b1 + b2)) {
        printf("2\n");
    } else if ((a1 + a2) == (b1 + b2)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}