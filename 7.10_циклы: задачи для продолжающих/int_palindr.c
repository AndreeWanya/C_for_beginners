#include <stdio.h>

int figure_count(int);

int main() {
    int N, counter, flag;

    scanf("%d", &N);

    counter = figure_count(N);
    flag = 1;

    while (counter > 1) {
        if (N / counter != N % 10) {
            flag = 0;
            break;
        }
        N = N / 10;
        counter = counter / 10;
        N = N % counter;
        counter = counter / 10;
    }

    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

int figure_count(int N) {
    float result = 0.1;
    while (N != 0) {
        result = result * 10;
        N = N / 10;
    }

    return result;
}