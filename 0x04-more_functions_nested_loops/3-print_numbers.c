#include "main.h"

/**
 * print_numbers - print numbers since 0 to 9
 * Return: numbers since 0 to 9
 * auth: Henry Ortegon G.
 **/
void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
}
