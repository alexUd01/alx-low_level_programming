#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: argument that determines the length of the line based on the
 * integer given
 *
 * Return: returns nothing
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
