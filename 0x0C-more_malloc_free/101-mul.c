#include "main.h"

int is_digit(char *s);
int _strlen(char *s);
void errors(void);

/**
 * main - a program that multiplies two positive numbers
 * @argc: number of arguments passed
 * @argv: an array of strings containing each of the arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1=argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(*result) * len);
	if (!result)
		return (1);
	for (i = 0; i <= (len1 + len2); i++)
		result[i] = 0;
	for (len1 = len1 - 1; len >= 0; len--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len = _strlen(s2) - 1; len2>= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 10)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < (len - 1); i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * is_digit - checks if every character of a string is a digit
 * @s: the string to be checked
 * Return: returns 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - a function that calculates the length of a string (except '\0')
 * @s: the string whose length is to be measured
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * errors - a function that prints error and exits with status 98.
 * Return: returns nothing
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
