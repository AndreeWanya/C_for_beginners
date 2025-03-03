#include <stdio.h>

int delim_konfety(int a);

int main() {
    int konfet;
    scanf("%d", &konfet);

    int detey = delim_konfety(konfet);
    printf("%d\n", detey);

    return 0;
}

int delim_konfety(int a) {
    static int result = 0;
    if (a == 1) {
        result++;
        return result;
    } else {
        result++;
        a = a - a / 2;
        delim_konfety(a);
    }

    return result;
}