#include<stdio.h>
/**
 *main - print pc sizes
 *Return: Always 0
 */
int main(void)
{
int intType;
long int b;
long long int c;
float floatType;
char charType;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
return (0);
}
