#include <stdio.h>

int main() {
    int money;      // Денег у студента
    int price;      // Цена риса
    int delta;      // Изменение цены риса раз в неделю
    int day = 0;    // Дней студент покупал рис
    int wday = 1;   // День недели

    scanf("%d%d%d", &price, &delta, &money);

    while (money >= price) {
        day ++;
        money -= price;
        if (wday == 7) {
            price += delta;
            wday = 1;
        } else {
            wday ++;
        }
    }

    printf("%d\n", day);

    return 0;
}