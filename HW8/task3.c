/*
Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре.

Данные на входе: 		10 целых чисел через пробел
Этот же массив отсортированный по последней цифре

Пример №1
Данные на входе: 		14 25 13 30 76 58 32 11 41 97
Данные на выходе: 	30 11 41 32 13 14 25 76 97 58

Пример №2
Данные на входе: 		109 118 100 51 62 73 1007 16 4 555
Данные на выходе: 	100 51 62 73 4 555 16 1007 118 109
*/

#include <stdio.h>
#include <stdbool.h>
#define TOTAL 10

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool isSwapped(int arr[TOTAL])
{
    for (int j = 0; j < TOTAL - 1; ++j)
        if (arr[j]%10 > arr[j+1]%10) {
            swap(&arr[j], &arr[j+1]);
            return true;
        }
    return false;
}

int main(void)
{
    int arr[TOTAL];

    for (int i = 0; i < TOTAL; ++i)
        scanf("%d", &arr[i]);

    bool swapped;
    do
    {
        swapped = isSwapped(arr);
    }
    while (swapped);

    for (int i = 0; i < TOTAL; ++i)
        printf("%d ", arr[i]);

    return 0;
}
