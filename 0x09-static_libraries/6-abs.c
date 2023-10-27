#include "main.h"
/**
 * _abs - function that computes value
 * @n: the number to be computed
 * Return: absolute value of the number or zero
 */
int _abs(int n)
{
if (n < 0)
{
int r;
r = n * -1;
return (r);
}
return (n);
}
