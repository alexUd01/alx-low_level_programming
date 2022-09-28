#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to
 * the power of y
 * @x: the number to be evaluated
 * @y: the exponent
 * Return: returns the -1 if y < 0, else returns the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, --y));
}
