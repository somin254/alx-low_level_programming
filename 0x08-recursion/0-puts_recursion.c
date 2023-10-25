#include "main.h"
/**
* _puts_recursion - main function
*
* @s: function parameter
* _putchar - print the out put
* main - the main function
* Return: Always 0.
* @c: the parametr
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
void _putchar(char c)
{
_putchar(c);
}
int main(void)
{
_puts_recursion("Puts with recursion");
return (0);
}
