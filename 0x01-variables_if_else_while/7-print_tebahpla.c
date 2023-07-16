#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the lowecase alphabet in reverse
 * Return: Always 0 (Success).
 **/
int main(void)
{
	int i = 122;

	while (i >= 'a')
	{
		putchar(i--);
	}
	putchar('\n');

	return (0);
}
