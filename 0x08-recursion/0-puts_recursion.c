#include "main.h"
/**
* _puts_recursion - main function
*
* @s: function parameter
*
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
int main(void)
{
_puts_recursion("Puts with recursion");
return (0);
}
