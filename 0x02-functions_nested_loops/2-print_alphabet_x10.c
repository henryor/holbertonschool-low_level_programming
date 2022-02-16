/*
* Auth; Henry Ortegon g
*/

#include "main.h"
/**
 * print_alphabet_x10-function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int ch, i;
i = 0;

while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
i++;
_putchar('\n');
}
}
