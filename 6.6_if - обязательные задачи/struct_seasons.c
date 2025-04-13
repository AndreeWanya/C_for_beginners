#include <stdio.h>

typedef struct {
    int yy;   // год
    char mm;  // месяц
    char dd;  // день
} Data;

typedef struct {
    int yy;        // год
    char season;   // время года (зима - 0, весна - 1, лето - 2, осень - 3)
    int day;       // день от начала текущего времени года
} Season;

// получает параметры даты с консоли (три целых числа через тире:
// YYYY-MM-DD)
// Например, 2020-12-13
Data getData();

// Печатает дату в формате: YYYY-MM-DD завершая переносом строки (\n)
void printData(Data);

// конвертирует дату в формат Season и возвращает это значение
// зима с 1 декабря по конец февраля, весна - с 1 марта по 31 мая, лето - с 1 июня по 31 августа,
// осень - с 1 сентября по 30 ноября
Season convToSeas(Data);

//  печать времени года в формате: YYYY-SS-DD (SS - номер времени года,
// DD - день от начала времени года, завершая переносом строки
void printSeas(Season);

int main() {
    Data dat;
    Season seas;
    dat = getData();
    printData(dat);
    seas = convToSeas(dat);
    printSeas(seas);

    return 0;
}

Data getData() {
    Data dat;
    scanf("%d-%hhd-%hhd", &dat.yy, &dat.mm, &dat.dd);
    return dat;
}

void printData(Data dat) {
    printf("%04d-%02d-%02d\n", dat.yy, dat.mm, dat.dd);
}

Season convToSeas(Data dat) {
    Season s;
    s.yy = dat.yy;
    if (dat.mm == 12 || dat.mm == 1 || dat.mm == 2) {
        s.season = 0;
        if (dat.mm == 12) {
            s.day = dat.dd;
        } else if (dat.mm == 1) {
            s.day = dat.dd + 31;
        } else {
            s.day = dat.dd + 31 + 31;
        }
    } else if (dat.mm >= 3 && dat.mm <= 5) {
        s.season = 1;
        if (dat.mm == 3) {
            s.day = dat.dd;
        } else if (dat.mm == 4) {
            s.day = dat.dd + 31;
        } else {
            s.day = dat.dd + 31 + 30;
        }
    } else if (dat.mm >= 6 && dat.mm <= 8) {
        s.season = 2;
        if (dat.mm == 6) {
            s.day = dat.dd;
        } else if (dat.mm == 7) {
            s.day = dat.dd + 30;
        } else {
            s.day = dat.dd + 30 + 31;
        }
    } else {
        s.season = 3;
        if (dat.mm == 9) {
            s.day = dat.dd;
        } else if (dat.mm == 1) {
            s.day = dat.dd + 30;
        } else {
            s.day = dat.dd + 30 + 31;
        }
    }

    return s;
}

void printSeas(Season s) {
    printf("%04d-%02d-%02d\n", s.yy, s.season, s.day);
}