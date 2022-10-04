#include "main.h"

/**
 * str_concat - a function that conactenates two strings.
 * @s1: the first string
 * @s2: the string to be attached to the first string
 * Return: returns a pointer to a newly allocated space in memory which
 *                 contains the contents of s1 followed by the contents
 *                 of s2 and null terminated (on success).
 *         returns NULL (on failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i, j;
	int len_s1, len_s2, tot_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = len_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		len_s2++;

	tot_len = len_s1 + len_s2;
	newStr = (char *)malloc((tot_len + 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < tot_len; i++)
	{
		if (s1[i] == '\0')
			break;
		newStr[i] = s1[i];
	}
	j = 0;
	for (; i < tot_len; i++)
	{
		if (s2[j] == '\0')
			break;
		newStr[i] = s2[j];
		j++;
	}
	newStr[i] = '\0';
	return (newStr);
}
