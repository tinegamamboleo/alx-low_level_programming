#include "holberton.h"

/**
 * main - Entry point
 *
 * putchar - to print "holberton"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char holberton[9] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
_putchar(holberton[i]);
}
_putchar('\n');
return (0);
}
