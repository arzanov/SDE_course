/*
Напечатать сумму максимума и минимума.

Данные на входе:	      Пять целых чисел через пробел
Данные на выходе:    Одно целое число - сумма максимума и минимума

Пример
Данные на входе:      	4    15    9    56    4
Данные на выходе:     60
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d, e, min, max;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    min = a;
    max = a;
    if (b >= max) max = b;
    else if (b <= min) min = b;
    if (c >= max) max = c;
    else if (c <= min) min = c;
    if (d >= max) max = d;
    else if (d <= min) min = d;
    if (e >= max) max = e;
    else if (e <= min) min = e;
    printf("%d\n", min+max);
    return 0;
}
