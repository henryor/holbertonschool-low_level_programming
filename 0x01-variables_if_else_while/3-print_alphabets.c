#include <stdio.h>
/**
 * main - print the alphabet in lower and upper case
 * only use putchar
 * Return: (0)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
