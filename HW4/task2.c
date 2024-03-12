/*
Ввести три числа и найти наибольшее из них

Данные на входе:		Три целых числа через пробел
Данные на выходе: 	Одно наибольшее целое число

Пример
Данные на входе:		4 15 9
Данные на выходе:  	15
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b >= a && b >= c) max = b;
    if (c >= a && c >= b) max = c;
    printf("%d\n", max);
    return 0;
}
