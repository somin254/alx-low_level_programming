#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer it is compiled and run on
 * Return 0
 */
int main(void)
{
char 1;
int 2;
long long int 3;
long int 4;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(2));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(3));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
