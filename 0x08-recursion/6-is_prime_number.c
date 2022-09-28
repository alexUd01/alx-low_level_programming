#include "main.h"

int prime_check(int n, int i);
int is_prime_number(int n);

/**
 * is_prime_number - a function that returns the result from
 * another function that checks if n is a prime number
 * @n: the number to be tested
 * Return: returns 1 if n is a prime number, otherwise it returns 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_check(n, 2));
}

/**
 * prime_check - a function that checks of a number is a prime number
 * @n: the number to be tested
 * 
 * Return: returns 1 if n is a prime number, otherwise it returns 0
 */
int prime_check(int n, int i)
{
	if (i == n)
		return (1);
	if ((n % i) == 0)
		return (0);
	else
		return (prime_check(n, ++i));
}
