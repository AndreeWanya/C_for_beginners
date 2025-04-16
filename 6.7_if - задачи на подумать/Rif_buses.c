#include <stdio.h>

int main() {
    int h, m, t1, t2;

    scanf("%d%d%d%d", &h, &m, &t1, &t2);

    int time = h * 60 + m;
    int bus_1 = time - 360;
    int bus_2 = time - 345;

    if (bus_1 < 0) {
        bus_1 = -bus_1;
    } else {
        bus_1 = bus_1 % t1;
        if (bus_1 > 0) {
            bus_1 = t1 - bus_1;
        }
    }

    if (bus_2 < 0) {
        bus_2 = -bus_2;
    } else {
        bus_2 = bus_2 % t2;
        if (bus_2 > 0) {
            bus_2 = t2 - bus_2;
        }
    }

    printf("%d\n", bus_1);
    printf("%d\n", bus_2);
    if (bus_1 <= bus_2) {
        printf("A");
    } else {
        printf("B");
    }

    return 0;
}