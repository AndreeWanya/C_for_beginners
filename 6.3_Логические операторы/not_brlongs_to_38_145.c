#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d ", x);

    if (!(37 <= x && x < 146)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}