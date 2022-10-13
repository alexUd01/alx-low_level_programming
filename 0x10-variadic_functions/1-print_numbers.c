#include "variadic_functions.h"

/**
 * print_numbers - a function that prints number followed by a newline
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: returns nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(ap, int));
			break;
		}
		if (seperator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), seperator);
	}
	va_end(ap);
	printf("\n");
}
