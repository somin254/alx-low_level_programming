#include<stdio.h>
/**
 * main - print all arguments
 * @agrc: count the arguments
 * @argv: vectors of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
int r;
for (r = 0 ; r < argc ; r++)
printf("%s\n", argv[r]);
return (0);
}
