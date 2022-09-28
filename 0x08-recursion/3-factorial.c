#include "main.h"

/**
 * factorial - a functionthat returns the factorial of a given number
 * @n: an integer to be evaluated
 * Return: returns -1 if n < 0 (to indicate error)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
