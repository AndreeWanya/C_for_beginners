#include <stdio.h>

int main() {
    unsigned char coor_1_ch, coor_1_num, coor_2_ch, coor_2_num;

    scanf("%c%c-%c%c", &coor_1_ch, &coor_1_num, &coor_2_ch, &coor_2_num);
    printf("%c%c-%c%c\n", coor_1_ch, coor_1_num, coor_2_ch, coor_2_num);

    printf(((coor_1_ch == coor_2_ch) || (coor_1_num == coor_2_num)) ? "YES" : "NO");

    return 0;
}