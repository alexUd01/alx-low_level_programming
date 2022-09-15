#include "main.h"

/**
 * print_most_numbers - a function that prints numbers from 0 to 9
 * followed by a new line (it must not print 2 and 4)
 *
 * Return: Returns nothing
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
