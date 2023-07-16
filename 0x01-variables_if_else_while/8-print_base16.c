#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success).
 **/
int main(void)
{
	int i = 48;
	char j = 'a';

	while (i <= 57)
		putchar(i++);

	while (j <= 'f')
		putchar(j++);

	putchar('\n');

	return (0);
}
