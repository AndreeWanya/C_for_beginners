#include <stdio.h>

int main() {
    char x, y;
    scanf("%c%c", &x, &y);

    printf("%c%d ", x - 1, y - 48);
    printf("%c%d ", x, y - 48 + 1);
    printf("%c%d ", x + 1, y - 48);
    printf("%c%d", x, y - 48 - 1);
    
    return 0;
}