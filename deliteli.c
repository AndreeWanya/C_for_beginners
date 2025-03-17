#include <stdio.h>

void simpleFactors(unsigned int a, unsigned int last, unsigned int n);
void printFactor(unsigned int last, unsigned int n);

int main()
{
    unsigned int a;
    scanf("%u", &a);
    simpleFactors(a, 2, 0);

    return 0;
}

void simpleFactors(unsigned int a, unsigned int last, unsigned int n) {
    while (a % last == 0) {
        a = a / last;
        n++;
    }
    if (a < last) {
        printFactor(last, n);
        return;
    }
    last++;
    int m = n;
    n = 0;
    simpleFactors(a, last, n);
    last--;
    n = m;
    printFactor(last, n);
}

void printFactor(unsigned int last, unsigned int n) {
    if (n == 0)
        return;
    if (n == 1)
        printf("%u ", last);
    else
        printf("%u^%u ", last, n);
}