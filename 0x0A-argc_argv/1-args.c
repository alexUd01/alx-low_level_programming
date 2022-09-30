#include "main.h"

/**
 * main - a program that prints teh number of arguments passed into it
 * @argc: the number of arguments passed during runtime of the program
 * @argv: an array of strings comtaining the strings passed during runtime
 * Return: returns always
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
