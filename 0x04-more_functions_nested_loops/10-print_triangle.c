#include "main.h"

/**
 * print_triangle - acording of squares
 * @size: size -  Variable
 * Return: Always (0)
 */
void print_triangle(int size)
{
int x, y;

if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (y <= size - x)
{
putchar(' ');
}
else
{
putchar('#');
}
}
putchar('\n');
}
}
else
{
putchar('\n');
}
}
