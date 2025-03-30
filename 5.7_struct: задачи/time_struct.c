typedef struct{
    int h; // часы
    int min; // минуты (от 0 до 59)
} TicTac;

#include <stdio.h>

// получает показание часов a и возвращает показание этих часов
// через min минут, .
TicTac after(TicTac a, int min);

// "переводит" вперед стрелки этих часов (me)
// на a.h часов и a.min минут
void forward(TicTac * me, TicTac a);

// "переводит" назад стрелки этих часов (me)
// на a.h часов и a.min минут
void backward(TicTac * me, TicTac a);

// проверяет совпадают ли показания часов a и b
// если совпадают, возвращает 1, если нет - 0
int isEqualTime(TicTac a, TicTac b);

// печатает показания этих часов в формате hh:mm\n
void printTic(TicTac a);

int main(){
    TicTac a,b,c;
    int mk;

    scanf("%d:%d", &(a.h), &(a.min));
    scanf("%d", &mk);
    scanf("%d:%d", &(b.h), &(b.min));

    printf("equal: %d\n",isEqualTime(a,b));
    c = after(a, mk);
    printf("after: ");
    printTic(c);

    c = a;
    printf("forward: ");
    forward(&a, b);
    printTic(a);

    printf("backward: ");
    backward(&c, b);
    printTic(c);

    return 0;
}

TicTac after(TicTac a, int min) {
    int num;
    num = a.h * 60 + a.min + min;
    if (num > 12 * 60) {
        num = num - 12 * 60;
    }
    a.h = num / 60;
    a.min = num % 60;
    
    return a;
}

void forward(TicTac * me, TicTac a) {
    int num;
    num = me->h * 60 + me->min + a.h * 60 + a.min;
    if (num > 12 * 60) {
        num = num - 12 * 60;
    }
    me->h = num / 60;
    me->min = num % 60;
}

void backward(TicTac * me, TicTac a) {
    int num;
    num = (me->h * 60 + me->min) - (a.h * 60 + a.min);
    if (num < 0) {
        num = 12 * 60 + num;
    } else if (num > 12 * 60) {
        num = num - 12 * 60;
    }
    me->h = num / 60;
    me->min = num % 60;
}

int isEqualTime(TicTac a, TicTac b) {
    return (a.h == b.h) && (a.min == b.min);
}

void printTic(TicTac a) {
    printf("%02d:%02d\n", a.h, a.min);
}