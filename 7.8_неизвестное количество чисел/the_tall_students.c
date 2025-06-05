#include <stdio.h>

int main() {
    int students_count = 0;
    int tall_students_count = 0;

    while(1) {
        int height;
        if (1 == scanf("%d", &height)) {
            students_count++;
            if (height > 170) {
                tall_students_count++;
            }
        } else {
            break;
        }
    }

    printf("%d %d\n", students_count, tall_students_count);

    return 0;
}