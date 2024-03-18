/*
Все счастливые числа
Ввести натуральное число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр
Данные на входе:		Одно натуральное число большее 10
Данные на выходе:	Числа у которых сумма цифр равна произведению цифр через пробел в порядке возрастания. Не превосходящие введенное число.

Пример №1
Данные на входе:		200
Данные на выходе:	22 123 132

Пример №2
Данные на входе:		1000
Данные на выходе:	22 123 132 213 231 312 321

Пример №3
Данные на входе:		22
Данные на выходе:	22
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int a, sum, prod, num;
    scanf("%d", &a);
    if (a > 10)
    {
        for (int i = 11; i <= a; i++)
        {
            num = i;
            sum = 0;
            prod = 1;
            while (num > 0)
            {
                sum += num%10;
                prod *= num%10;
                num /= 10;
            }
            if (sum == prod)
                printf("%d ", i);
        }
    }
    else
        printf("Wrong input");
    return 0;
}
