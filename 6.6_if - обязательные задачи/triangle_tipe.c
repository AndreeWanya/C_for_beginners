#include <stdio.h>
#include <assert.h>

int triangle_len_type(int a, int b, int c);

int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    #ifdef AAA
    assert(2 == triangle_len_type(3, 3, 3));
    assert(1 == triangle_len_type(3, 4, 3));
    assert(0 == triangle_len_type(3, 4, 5));
    assert(1 == triangle_len_type(4, 4, 3));
    assert(1 == triangle_len_type(9, 10, 10));
    assert(-1 == triangle_len_type(2, 17, 2));
    #endif

    printf("%d", triangle_len_type(a, b, c));

    return 0;
}

int triangle_len_type(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    if (a == b && b == c) {
        return 2;
    } else if (a == b || b == c || c == a) {
        return 1;
    } else {
        return 0;
    }
}