/*
Ввести два числа и вывести их в порядке возрастания.

Данные на входе:       Два целых числа
Данные на выходе:    Два целых числа

Пример:
Данные на входе:      15 9
Данные на выходе:   9 15
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b)
        printf("%d %d\n", b, a);
    else
        printf("%d %d\n", a, b);
    return 0;
}
