struct Point {
    int x;
    int y;
};

struct Rect1 {
    struct Point lt;
    struct Point rb;
};

#include <stdio.h>

int main() {
    struct Rect1 b;
    b.lt.x = -7;
    b.lt.y = 5;
    b.rb.x = 5;
    b.rb.y = -3;

    printf("%d %d %d %d", b.lt.x, b.lt.y, b.rb.x, b.rb.y);

    return 0;
}