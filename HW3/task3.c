/*
Ввести два числа и найти их разность
Нужно напечатать разность двух чисел
Данные на входе:       Два целых числа через пробел
Данные на выходе:    Одно целое число
Пример №1:
Данные на входе:        4 5
Данные на выходе:     -1
Пример №2:
Данные на входе:        100 49
Данные на выходе:     51
*/
#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, razn;
    scanf("%d %d", &a, &b);
    razn = a - b;
    printf("%d\n", razn);
    return 0;
}
