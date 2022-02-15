#include <stdio.h>
/**
 * main - print number of base 10, start from 0
 * use putchar
 * Return: (0)
 */
int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
