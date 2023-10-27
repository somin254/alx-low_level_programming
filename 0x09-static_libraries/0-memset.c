#include "main.h"
/**
* _memset - Program fills a block of memory 
* @s: address of memory to be filled
* @b: parameter
* @n: number of bytes
* Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int r = 0;
for (; n > 0; r++)
{
s[r] = b;
n--;
}
return (s);
}
