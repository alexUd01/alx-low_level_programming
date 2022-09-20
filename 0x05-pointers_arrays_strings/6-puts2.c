#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: a pointer pointingto the string
 * Returns: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (*(str + i) == 0)
		{
			printf("\n");
			break;
		}
		if (i % 2 == 0)
			printf("%c", *(str + i));
	}
}
