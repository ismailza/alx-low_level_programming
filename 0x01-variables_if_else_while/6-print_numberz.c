#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints 0 to 9 using putchar function
 * Return: Always 0 (Success).
 **/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);
	}
	putchar('\n');

	return (0);
}
