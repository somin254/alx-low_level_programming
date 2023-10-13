#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 *@c: the character to be cheacked
 * Return: Always 0.
 */
int _isupper(int c)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isupper(0));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
