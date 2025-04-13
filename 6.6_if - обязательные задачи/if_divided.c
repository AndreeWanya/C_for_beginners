#include <stdio.h>
#include <assert.h>

int if_divided(int a);

int main() {
    #ifdef AAA
    assert(1 == if_divided(6));
    assert(1 == if_divided(10));
    assert(0 == if_divided(30));
    assert(0 == if_divided(11));
    assert(1 == if_divided(3));
    assert(1 == if_divided(5));
    assert(0 == if_divided(15));
    assert(0 == if_divided(150));
    assert(0 == if_divided(45));
    #endif

    int a;
    scanf("%d", &a);

    printf((if_divided(a)) ? "YES" : "NO");

    return 0;
}

int if_divided(int a) {
    if (a % 15 == 0) {
        return 0;
    } else if (a % 3 == 0 || a % 5 == 0) {
        return 1;
    }

    return 0;
}