#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse followed
 * by a new line.
 * @s: a pointer to the address string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j;
	int c = 0;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == 0)
			break;
		c++;
	}
	for (j = c - 1; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
}
