#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of ll its parameters
 * @n: number of arguments passed to the function
 *
 * Return: returns the sum of all arguments (success)
 *         returns 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
