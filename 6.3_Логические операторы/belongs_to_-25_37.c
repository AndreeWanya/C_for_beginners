#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d ", x);

    if (-25 <= x && x < 37) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}