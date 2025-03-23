#include <stdio.h>
#include <assert.h>

long long int ipow(long long int a, unsigned int n, unsigned int *depth);

int main() {
    int a, n;
    unsigned int depth = 7;

    scanf("%d%d", &a, &n);
    long long int res = ipow(a, n, &depth);

    printf("%lld %d", res, depth);

    // тесты
    assert(531441 == ipow(3, 12, &depth));
    //assert(depth == 5);
    assert(4294967296 == ipow(2, 32, &depth));
    //assert(depth == 6);
    assert(1 == ipow(1, 100, &depth));
    //assert(depth == 9);
    assert(3125 == ipow(5, 5, &depth));
    //assert(depth == 4);
    assert(-177147 == ipow(-3, 11, &depth));
    //assert(depth == 6);
    assert(1 == ipow(146, 0, &depth));
    //assert(depth == 1);
    assert(123 == ipow(123, 1, &depth));
    //assert(depth == 1);

    return 0;
}

long long int ipow(long long int a, unsigned int n, unsigned int *depth) {
    static unsigned int d = 1;
    if (n == 0) {
        *depth = d;
        return 1;
    } else if (n == 1) {
        *depth = d;
        return a;
    } else if (n % 2 == 0) {
        a = a * a;
        n = n / 2;
        *depth = ++d;
        return ipow(a, n, depth);
    } else {
        long long int b = a * a;
        n = n - 1;
        n = n / 2;
        d = d + 2;
        *depth = d;
        return a * ipow(b, n, depth);
    }
}