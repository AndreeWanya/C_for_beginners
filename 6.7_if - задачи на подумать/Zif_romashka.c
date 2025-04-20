#include <stdio.h>

long long int factorial(int);
int dig_sum(long long int);

int main() {
    int N, love;

    scanf("%d", &N);
    love = 0;
    for (int i = 1; i <= N; i++) {
        long long int fac = factorial(i);
        if (dig_sum(fac) == 2) {
            love += 1 ;
        } else if (dig_sum(fac) == 3) {
            love += 1;
        }
    }

    if (love == 0) {
        printf("0");
    } else {
        printf("%d\n", love);
    }

    return 0;
}

long long int factorial(int N) {
    if (N == 0 || N == 1) {
        return 1;
    }

    return N * factorial(N - 1);
}

int dig_sum(long long int fac) {
    int result = 0;
    while (fac != 0) {
        result += fac % 10;
        fac = fac / 10;
    }

    return result;
}