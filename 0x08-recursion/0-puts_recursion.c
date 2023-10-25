#include"main.h"
/**
 * _put_recursion - the main function
 * @s: function parameter
 * Return: 0.
 */
void _puts_recursion(char *s)
{
if(*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar("\n");
}
