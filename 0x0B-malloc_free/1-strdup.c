#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as parameter.
 * @str: the string to duplicate
 * Return: returns a pointer to the deplicate string if success
 *         returns NULL if insufficient memory is available
 *         returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	str2 = (char *)malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		if (str2 == NULL)
		return (NULL);

		str2[i] = str[i];
	}
	str2[i] = '\0';
	return (str2);
}
