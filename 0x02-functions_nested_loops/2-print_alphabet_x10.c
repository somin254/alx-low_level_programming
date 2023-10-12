#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
char r;
int w;
for (w = 0; w < 10; w++)
{
for (r = 'a'; r <= 'z'; r++)
_putchar(r);
_putchar('\n');
}
}
