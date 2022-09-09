#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - prints every number from 0 to 9
* Return: returns 0
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		i++;
	}
	return (0);
}
