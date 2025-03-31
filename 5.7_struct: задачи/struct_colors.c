typedef struct
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

#include <stdio.h>

// считать RGB-формат с консоли
Color getColor();
// перевод из RGB-формата в число
unsigned long long convertToHTML(Color);
// преобразование числа цвета в RGB-формат
Color convertToRGB(unsigned long long);
// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
// red green blue:
// 255 128 222
// Печатать только числа через пробел и \n в конце!!!
void printRGB(Color);

// печать цвета в HTML-формате и \n в конце.
// Примеры: FFA902 0AA3FF
void printHTML(Color);

int main() {
    Color z, z2;
    unsigned long long html;

    z = getColor();
    printRGB(z);

    html = convertToHTML(z);
    printf("%llu\n", html);
    printHTML(z);

    z2 = convertToRGB(html);
    printRGB(z2);

    return 0;
}

Color getColor() {
    Color new_color;
    scanf("%hhu%hhu%hhu", &new_color.red, &new_color.green, &new_color.blue);

    return new_color;
}

unsigned long long convertToHTML(Color z) {
    return z.red * 256 * 256 + z.green * 256 + z.blue;
}

Color convertToRGB(unsigned long long html) {
    Color z;
    z.red = html / (256 * 256);
    z.green = (html - z.red * 256 * 256) / 256;
    z.blue = html - z.red * 256 * 256 - z.green * 256;

    return z;
}

void printRGB(Color z) {
    printf("%hhu %hhu %hhu\n", z.red, z.green, z.blue);
}

void printHTML(Color z) {
    printf("%02X%02X%02X\n", z.red, z.green, z.blue);
}