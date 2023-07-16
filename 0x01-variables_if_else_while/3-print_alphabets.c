#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase and uppercase
 * Return: Always 0 (Success).
 **/
int main(void)
{
	int i = 97;

	while (i <= 'z')
	{
		putchar(i++);
		
		if (i == 123)
			i = 65;
		
		if (i == 91)
			break;

	}

	putchar('\n');

	return (0);
}
