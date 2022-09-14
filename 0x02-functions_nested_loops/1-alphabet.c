#include"main.h"

/**
 * print_alphabet - a function that prints the alpjabet, in lowercase.
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	int a = '97';
	int z = '122';

	alpha = 'a';
	while (alpha <= z)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
