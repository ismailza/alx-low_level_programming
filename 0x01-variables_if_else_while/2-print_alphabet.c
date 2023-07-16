#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase
 * Return: Always 0 (Success).
 **/
int main(void)
{
	int i = 97;

	while (i <= 'z')
	{
		putchar(i++);
	}
	putchar('\n');

	return (0);
}
