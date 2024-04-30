/*
Сумма цифр равна произведению

Составить логическую функцию, которая определяет, верно ли, что в данном числе сумма цифр равна произведению.

int is_happy_number(int n)

Данные на входе: 		Целое не отрицательное число
Данные на выходе: 	YES или NO

Пример №1
Данные на входе: 		123
Данные на выходе: 	YES

Пример №2
Данные на входе: 		528
Данные на выходе: 	NO
*/

#include <stdio.h>

int is_happy_number(int n)
{
    int s = 0;
    int p = 1;
    while (n > 10)
    {
        s += n % 10;
        p *= n % 10;
        n /= 10;
    }
    s += n;
    p *= n;
    if (s == p)
    {
        return 1;
    }
    else
        return 0;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    printf("%s", is_happy_number(n) ? "YES" : "NO");
    return 0;
}
