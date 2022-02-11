#include <stdio.h>
/**
 *main-description
 *Return:0
 *Write a C program that prints the sizes of various types on the computer
*/

int main(void)
{
printf("Size of a char:%d byte(s)\n", sizeof(char));
printf("Size of an int:%d 4 byte(s)\n", sizeof(int));
printf("size of a long int:%d 4 byte(s)\n", sizeof(long));
printf("Size of a long long int:%d 8 byte(s)\n", sizeof(double));
return (0);
}
