#include <stdio.h>
/**
 * main - print _putchar
 * use putchar
 * Return: (0)
 */
int main(void)
{
char s = '_';
char p = 'p';
char u = 'u';
char t = 't';
char c = 'c';
char h = 'h';
char a = 'a';
char r = 'r';
putchar(s);
putchar(p);
putchar(u);
putchar(t);
putchar(c);
putchar(h);
putchar(a);
putchar(r);
putchar('\n');
return (0);
}

void print_alphabet(void);
{
char ch;
for (ch= 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
