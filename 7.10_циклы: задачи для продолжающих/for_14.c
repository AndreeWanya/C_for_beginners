#include <stdio.h>

int main() {
    char s[256];
    int ch;
    int i = 0;
    int plus = 0;
    int minus = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == 40 || ch == 41) {
            s[i] = (char)ch;
            i++;
        }
        if (ch == 10) {
            s[i] = (char)0;
            break;
        }
    }

    if (i % 2 != 0) {
        printf("NO\n");
    } else {
        for (int j = 0; j < i; j++) {
            if (s[j] == 41 && j == 0) {
                printf("NO\n");
                break;
            } else if (s[j] == 40) {
                plus++;
            } else if (s[j] == 41) {
                minus++;
            }
            if (minus > plus) {
                printf("NO\n");
                break;
            }
        }
        if (plus == minus && plus != 0) {
            printf("YES\n");
        } else if (plus > minus) {
            printf("NO\n");
        }
    }

    return 0;
}