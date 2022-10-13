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
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
