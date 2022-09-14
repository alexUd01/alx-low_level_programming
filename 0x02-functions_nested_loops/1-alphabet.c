#include"main.h"

/**
 * print_alphabet - a function that prints the alpjabet, in lowercase.
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	int z = 122;

	alpha = 97;
	while (alpha <= z)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
