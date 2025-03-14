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
    if (a % last == 0) {
        printFactor(last, n);
        a = a / last;
        n++;
    } else if ((a % last != 0) && (a != 1)) {
        printFactor(last, n);
        last++;
        n = 0;
        
    } else if (a == 1) {
        return;
    }
    simpleFactors(a, last, n);
    //printFactor(last, n);
}

void printFactor(unsigned int last, unsigned int n) {
    if (n == 0)
        return;
    if (n == 1)
        printf("%u ", last);
    else
        printf("%u^%u ", last, n);
}