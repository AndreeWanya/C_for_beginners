#include <stdio.h>

int main()
{
    int g1, s1, k1, g2, s2, k2;

    scanf("%d%d%d\n", &g1, &s1, &k1);
    scanf("%d%d%d\n", &g2, &s2, &k2);
    
    k1 = k1 + k2;
    s1 = s1 + s2 + k1 / 29;
    g1 = g1 + g2 + s1 / 17;
    s1 = s1 - (s1 / 17) * 17;
    k1 = k1 - (k1 / 29) * 29;

    printf("%d%d%d", g1, s1, k1);

    return 0;
}