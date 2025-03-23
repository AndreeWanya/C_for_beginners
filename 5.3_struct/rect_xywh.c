struct Rect0 {
    int x;
    int y;
    int width;
    int height;
};

#include <stdio.h>

int main() {
    struct Rect0 a;
    a.x = -7;
    a.y = 5;
    a.width = 12;
    a.height = 8;

    printf("%d %d %d %d\n", a.x, a.y, a.width, a.height);

    return 0;
}