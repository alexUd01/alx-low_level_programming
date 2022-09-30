#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 * @argc: the number of arguments passed in the command line
 * @argv: an array of the strings passed during runtime
 * Return: always returns 0 (success)
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
