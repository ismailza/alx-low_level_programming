#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Prints _putchar
 * Return: Always 0 (Success)
 **/
int main(void)
{
	unsigned int i = 0;
	char str[] = "_putchar";

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
