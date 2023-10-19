#include "main.h"
#include<stdio.h>
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @r: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int length = strlen(dest);
int r;
for (r =0 ; r < n && *src != '\0'; r++)
{
dest[length + r] = *src;
r++;
}
dest[length + r] = '\0';
return (dest);
}
