#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase
 * except 'q' and 'e'
 * Return: Always 0 (Success).
 **/
int main(void)
{
	int i = 97;

	while (i <= 'z')
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		
		putchar(i++);
	}

	putchar('\n');

	return (0);
}
