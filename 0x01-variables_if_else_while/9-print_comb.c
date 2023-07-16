#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all possible combinations of
 * single-digit numbers
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);

		if (i == 58)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
