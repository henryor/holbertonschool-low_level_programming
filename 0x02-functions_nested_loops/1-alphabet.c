/*
* Auth; Henry Ortegon g
*/

#include "main.h"

/**
 * main - print alphabet in lower case
 * use _putchar
 * Return: (0)
 */

void print_alphabet(void);
{
char ch;
for (ch= 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return (0);
}
