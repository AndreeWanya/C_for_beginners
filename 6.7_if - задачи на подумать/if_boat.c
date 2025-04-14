#include <stdio.h>
#include <assert.h>

int if_boat(int, int, int, int);

int main() {
    #ifdef AAA
    assert(1 == if_boat(100, 50, 30, 20));
    assert(0 == if_boat(100, 120, 30, 20));
    assert(0 == if_boat(100, 100, 100, 100));
    assert(1 == if_boat(100, 10, 20, 100));
    #endif

    int k, p1, p2, p3;

    scanf("%d%d%d%d", &k, &p1, &p2, &p3);
    printf((if_boat(k, p1, p2, p3)) ? "YES" : "NO");

    return 0;
}

int if_boat(int k, int p1, int p2, int p3) {
    if (k < p1 || k < p2 || k < p3) {
        return 0;
    }

    if (((k < p1 + p2 && k < p1 + p3) && (k < p2 + p3 && k < p2 + p1)) || ((k < p2 + p3 && k < p2 + p1) && (k < p3 + p2 && k < p3 + p1)) ||
        ((k < p1 + p2 && k < p1 + p3) && (k < p3 + p2 && k < p3 + p1))) {
        return 0;
    }

    return 1;
}