#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char q = 'a';
while (q <= 'z')
{
putchar(q);
q++;
}
putchar('\n');
return (0);
}
