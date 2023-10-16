#include "main.h"
#include <studio.h>
/**
 * swap_int - function that swaps
 * @a: the value
 * @b: another value
 */
void swap_int(int *a, int *b)
{
int r;
r = *a;
*a = *b;
*b = r;
}
