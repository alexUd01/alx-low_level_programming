#include "main.h"

int sqrt_func(int n, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - a function that returns the natural square root of
 * a number
 * @n: the natural number to be evaluated
 * Return: returns -1 if n does not have a natural squareroot else, it
 * returns the squareroot of the natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_func(n, 0));
}

/**
 * sqrt_func - a function that solves for the squareroot of a number
 * @n: the natural number to be evaluated
 * @i: iteretor (test case)
 * Return:  the squareroot of the natural number
 */
int sqrt_func(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	else //if ((i * i) < n)
		return (sqrt_func(n, ++i));
}
