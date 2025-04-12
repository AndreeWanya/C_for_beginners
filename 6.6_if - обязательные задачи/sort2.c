#include <stdio.h>
#include <assert.h>

void sort2(int * a, int * b);

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    sort2(&x, &y);
    printf("%d %d\n", x, y);

    #ifdef AAA
    x = -5;
    y = -1;
    sort2(&x, &y);
    assert(-5 == x);
    assert(-1 == y);

    x = 6;
    y = 6;
    sort2(&x, &y);
    assert(6 == x);
    assert(6 == y);

    x = -2;
    y = -4;
    sort2(&x, &y);
    assert(-4 == x);
    assert(-2 == y);

    x = 1;
    y = -3;
    sort2(&x, &y);
    assert(-3 == x);
    assert(1 == y);

    x = 12;
    y = 111;
    sort2(&x, &y);
    assert(12 == x);
    assert(111 == y);
    #endif
    return 0;
}

void sort2(int * a, int * b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    } 
}