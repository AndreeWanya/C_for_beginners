#include <stdio.h>
#include <assert.h>

void sort2(int * a, int * b);
void sort3(int * x, int * y, int * z);

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    sort3(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);

    #ifdef AAA
    x = 3;
    y = 10;
    z = 2;
    sort3(&x, &y, &z);
    assert(2 == x);
    assert(3 == y);
    assert(10 == z);

    x = 9;
    y = 6;
    z = 1;
    sort3(&x, &y, &z);
    assert(1 == x);
    assert(6 == y);
    assert(9 == z);

    x = 7;
    y = 1;
    z = 3;
    sort3(&x, &y, &z);
    assert(1 == x);
    assert(3 == y);
    assert(7 == z);

    x = 1;
    y = 7;
    z = 3;
    sort3(&x, &y, &z);
    assert(1 == x);
    assert(3 == y);
    assert(7 == z);

    x = 2;
    y = 4;
    z = 8;
    sort3(&x, &y, &z);
    assert(2 == x);
    assert(4 == y);
    assert(8 == z);

    x = 4;
    y = 2;
    z = 8;
    sort3(&x, &y, &z);
    assert(2 == x);
    assert(4 == y);
    assert(8 == z);

    x = 7;
    y = 7;
    z = 7;
    sort3(&x, &y, &z);
    assert(7 == x);
    assert(7 == y);
    assert(7 == z);

    x = 9;
    y = 9;
    z = 3;
    sort3(&x, &y, &z);
    assert(3 == x);
    assert(9 == y);
    assert(9 == z);

    x = 9;
    y = 9;
    z = 11;
    sort3(&x, &y, &z);
    assert(9 == x);
    assert(9 == y);
    assert(11 == z);

    x = 1;
    y = 4;
    z = 1;
    sort3(&x, &y, &z);
    assert(1 == x);
    assert(1 == y);
    assert(4 == z);

    x = 4;
    y = 7;
    z = 4;
    sort3(&x, &y, &z);
    assert(4 == x);
    assert(4 == y);
    assert(7 == z);

    x = 7;
    y = 1;
    z = 1;
    sort3(&x, &y, &z);
    assert(1 == x);
    assert(1 == y);
    assert(7 == z);

    x = 2;
    y = 2;
    z = 9;
    sort3(&x, &y, &z);
    assert(2 == x);
    assert(2 == y);
    assert(9 == z);
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

void sort3(int * x, int * y, int * z) {
    sort2(x, z);
    sort2(x, y);
    sort2(y, z);
}