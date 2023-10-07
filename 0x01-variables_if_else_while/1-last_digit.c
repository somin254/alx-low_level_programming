#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program will assign a random number to the variable n
 * Return: 0
 */
int main(void)
{
int n;

int w;

srand(time(0));
n = rand() - RAND_MAX / 2;
n = w % 10;
if (w > 5)
	printf("last digit of %d and %d is and is greater than 5\n", n, w);
if (w == 0)
	printf("last digit of %d and %d is 0\n", n, w);
if (w < 6 && w != 0)
	printf("last digit of %d and %d is less than 6 and not 0\n", n, w);
return (0);
}
