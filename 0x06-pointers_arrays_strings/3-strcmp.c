#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: strings to compare
 * @s2: other string to compare
 *
 * Return: difference in length
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (s1[i] - s2[i]);
i++;
}

return (s1[i] - s2[i]);
}
