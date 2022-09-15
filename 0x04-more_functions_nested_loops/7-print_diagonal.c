#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * (_putchar can only be used twice to print)
 * @n: number of times "\" shouild be printed
 *
 * Return: returns nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
