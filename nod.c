#include <stdio.h>
#include <assert.h>

int nod(int a, int b);

int main() {
    int a, b;

    // тесты
    assert(2 == nod(10, 32));
    assert(6 == nod(12, 30));
    assert(27 == nod(27, 81));
    assert(1 == nod(14851, 15401));
    assert(1 == nod(1, 1));
    assert(1025 == nod(1025, 1025));
    assert(1 == nod(100000, 100001));

    // для произвольных чисел
    scanf("%d%d", &a, &b);
    printf("%d\n", nod(a, b));

    return 0;
}

int nod(int a, int b) {
    if (a % b == 0) {
        return b;
    }

    int c = a % b;
    return nod(b, c);
}