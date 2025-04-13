#include <stdio.h>
#include <assert.h>

int if_penetrate(int w, int h, int a, int b, int c);

int main() {
    int w, h, a, b, c;

    scanf("%d%d", &w, &h);
    scanf("%d%d%d", &a, &b, &c);

    #ifdef AAA
    assert(1 == if_penetrate(180, 80, 200, 60, 120));
    assert(0 == if_penetrate(180, 80, 200, 60, 190));
    assert(0 == if_penetrate(80, 150, 90, 90, 90));
    assert(0 == if_penetrate(30, 40, 50, 65, 100));
    assert(1 == if_penetrate(30, 40, 170, 35, 25));
    assert(1 == if_penetrate(30, 40, 25, 100, 35));
    #endif

    if (if_penetrate(w, h, a, b, c)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

int if_penetrate(int w, int h, int a, int b, int c) {
    if ((w >= a && (h >= b || h >= c)) || (w >= b && (h >= a || h >= c)) || (w >= c && (h >= a || h >= b))) {
        return 1;
    }

    return 0;
}