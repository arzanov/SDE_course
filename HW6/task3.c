/*
НОД
Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
int nod(int a, int b)
Данные на входе: 		Два целых положительных числа
Данные на выходе: 	Одно целое число - наибольший общий делитель.

Пример №1
Данные на входе: 		14 21
Данные на выходе: 	7
*/

#include <stdio.h>

int min(int a, int b)
{
    if (a>b)
    {
        return b;
    }
    else
        return a;
}

int nod(int a, int b)
{
    int result = 1;
    for (int i = 2; i < min(a, b); i++)
    {
        if (a%i == 0 && b%i == 0)
        {
            result = i;
        }
    }
    return result;
}

int main(int argc, char **argv)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", nod(a, b));
    return 0;
}
