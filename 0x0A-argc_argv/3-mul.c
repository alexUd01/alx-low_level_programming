#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: the number of arguments passed to the program at runtime
 * @argv: an array of strings containing the arguments passed at runtime
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
