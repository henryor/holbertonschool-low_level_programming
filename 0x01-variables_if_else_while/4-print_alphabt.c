#include <stdio.h>
/**
 * main - print the alphabet in lower case
 * except q and e
 * only use putchar
 * Return: (0)
 */
int main(void)
{
char ch, e, q;
e = 'e';
q = 'q';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != e && ch != q)
putchar(ch);
}
printf("\n");
return (0);
}
