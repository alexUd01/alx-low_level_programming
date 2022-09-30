#include "main.h"

/**
 * main - a program that adds positive numbers
 * @argc: the number of arguments passed
 * @argv: an array of strings containing the arguments passed at runtime
 * Return: always 0
 */
int main(int argc,  char *argv[])
{
	int i, sum = 0;
	char *p = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += strtol(argv[i], &p, 10);
			if (*p != 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);

}
