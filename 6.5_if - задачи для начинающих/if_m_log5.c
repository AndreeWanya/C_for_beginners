#include <stdio.h>

int main() {
    unsigned int z;

    scanf("%d", &z);

    switch (z) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: {
            printf("0");
            break;
        }
        case 10:
        case 11:
        case 12: {
            printf("3");
            break;
        }
        case 13:
        case 14:
        case 15: {
            printf("5");
            break;
        }
        default: printf("10");
    }
    
    return 0;
}