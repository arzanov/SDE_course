/*
Скобки
Проверить строку состоящую из скобок "(" и ")" на корректность.

Данные на входе: 		На вход подается строка состоящая из символов '(', ')' и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
Данные на выходе: 	Необходимо напечатать слово YES если скобки расставлены верно и NO в противном случае.

Пример №1
Данные на входе: 		(()()).
Данные на выходе: 	YES

Пример №2
Данные на входе: 		()(.
Данные на выходе: 	NO
*/

#include <stdio.h>

static int op = 0;
static int cl = 0;
static char last;

void counter(char c)
{
    if (c == '(')
    {
        op += 1;
        last = '(';
    }
    if (c == ')')
    {
        cl += 1;
        last = ')';
    }
}

int is_correct()
{
    if (op == cl && last != '(')
    {
        return 1;
    }
    return 0;
}

int main(int argc, char **argv)
{
    char c;
    while( (c=getchar())!='.')
    {
        counter(c);
    }

    printf("%s", is_correct() ? "YES" : "NO");
    return 0;
}
