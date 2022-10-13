#include "variadic_functions.h"

/**
 * print_numbers - a function that prints number followed by a newline
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: returns NULL if seperator == NULL
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (seperator == NULL)
		return;
	if (n < 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
		{
			printf("%s", seperator);
		}
	}
	va_end(ap);
	printf("\n");
}
