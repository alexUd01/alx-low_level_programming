#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to be appended to s1
 * Return: returns a pointer to the newly allocated space in memory
 *                 containing s1 followed by the first n bytes of s2 (ON
 *                 SUCCESS).
 *         returns NULL (ON FAILURE).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i, j;
	unsigned int len_s1 = 0, len_s2 = 0, len_newStr = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;

	if (n >= len_s2)
	{
		len_newStr = len_s1 + len_s2;
		newStr = malloc((len_s1 + len_s2 + 1) * sizeof(*newStr));
	}
	else
	{
		len_newStr = len_s1 + n;
		newStr = malloc((len_s1 + n + 1) * sizeof(*newStr));
	}
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		newStr[i] = s1[i];
	for (j = 0; i < len_newStr; i++)
	{
		newStr[i] = s2[j];
		j++;
	}
	newStr[i] = '\0';
	return (newStr);
}
