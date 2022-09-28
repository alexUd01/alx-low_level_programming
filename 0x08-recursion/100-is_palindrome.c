#include "main.h"

/**
 * _strlen_recursion - a function that counts the length of a ctring when
 * called.
 * @s: the string to be counted.
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * pali_check - the function that checks if a string is palindrome or not
 * @s: the string to be checked
 * @i: the current position
 * Return: returns 1 if string is palindrome and 0 if not palindrome
 */
int pali_check(char *s, int i)
{
	if (i < 1)
		return (1);
	if (*s == *(s + i))
		return (pali_check(s + 1, i - 2));
	return (0);
}

/**
 * is_palindrome - a function that calls other functions to check if
 * a string is palindrome or not
 * @s: the string to be checked
 * Return: returns the result of pali_check
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pali_check(s, --len));
}
