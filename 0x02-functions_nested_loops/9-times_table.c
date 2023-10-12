#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *  Return: void
 */
void times_table(void)
{
int w, r;
for (w = 0; w <= 9; w++)
{
for (r = 0; r <= 9; r++)
{
if (r == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
if ((w * r) < 10)
{
_putchar(' ');
}
printf("%d", w * r);
}
}
_putchar('\n');
}
}
