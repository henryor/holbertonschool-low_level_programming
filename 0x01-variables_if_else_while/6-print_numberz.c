#include <stdio.h>
/**
 * main - print number of base 10, start from 0
 * use putchar
 * Return: (0)
 */

int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
putchar(c);
putchar('\n');
return (0);
}
