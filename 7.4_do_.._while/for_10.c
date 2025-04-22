#include <stdio.h>

int main() {
    int num;
    int flag = 0;

    scanf("%d", &num);

    while (num > 0) {
        if (num % 10 == 0 && flag == 0) {
            num = num / 10;
            continue;
        } else {
            printf("%d", num % 10);
            flag = 1;
            num = num / 10;
        }
    }

    return 0;
}