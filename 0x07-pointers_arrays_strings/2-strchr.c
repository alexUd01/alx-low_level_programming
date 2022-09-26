#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: a pointer to the string to be searched.
 * @c: the character to be searched for
 * Return: returns a pointer to the first occurrence of the character c in
 * in the string s.
 */
char *_strchr(char *s, char c)
{
	unsigned int i, len = 0;

	for (i = 0; 1; i++)
	{
		if (s[i] == 0)
			return (NULL);
		if (*(s + i) == c)
			break;
	}
	return (s + i);
}
