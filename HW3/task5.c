/*
На вход подается произвольное трехзначное число.
Нужно напечатать произведение цифр.
Данные на входе:       Трехзначное целое положительное число
Данные на выходе:    Одно целое число
Пример №1:
Данные на входе:        435
Данные на выходе:     60
Пример №2:
Данные на входе:        102
Данные на выходе:    0
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    scanf("%d", &a);
    printf("%d\n", (a/100)*(a%100/10)*(a%10));
    return 0;
}