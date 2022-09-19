#include "main.h"

/**
 * rev_string - tests a function
 * @s: a pointer to the address of the string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;

	for (i = ((sizeof(s[])) / (sizeof(s[0]))) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
