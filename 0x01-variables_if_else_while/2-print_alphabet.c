#include<stdio.h>
#include<stdlib.h>

/**
 * main - the main function
 *Return: always returns 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
