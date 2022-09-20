#include "main.h"

/**
 * rev_string - tests a function
 * @s: a pointer to the address of the string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	int c = 0;
	char revString[1000];

	for (i = 0; 1 ; i++)
	{
		if (s[i] == 0)
			break;
		c++;
	}
	i = 0;
	for (j = (c - 1); j >= 0; j--)
	{
		revString[i] = s[j];
		i++;
	}
	for (i = 0; 1 ; i++)
	{
		if (revString[i] == 0)
			break;
		s[i] = revString[i];
	}
}
