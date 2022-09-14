#include"main.h"

/**
 * int _isalpha - checks for alphabetical character
 * Return: returns 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	int c;
	while ((c > 64) && (c < 91) || (c > 96) && (c < 123))
		return (1);
	else
		return (0);
}
