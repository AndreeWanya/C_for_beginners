#include <stdio.h>

int main() {
    unsigned int N, K;

    scanf("%d%d", &N, &K);

    printf("%d\n", (N / 4 > K) ? K : N / 4);

    return 0;
}