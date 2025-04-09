#include <stdio.h>

int main() {
    int num_1, num_2;

    scanf("%d%d", &num_1, &num_2);
    printf("%d %d\n", num_1, num_2);

    if (num_1 > num_2) {
        printf("%d\n", num_2);
    } else {
        printf("%d\n", num_1);
    }
    
    return 0;
}