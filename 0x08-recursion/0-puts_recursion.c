#include"main.h"
/**
 * _puts_recursion - print astring folowed by aline
 * @s: the string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0');
{
_putchar('\n')
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
