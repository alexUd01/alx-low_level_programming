#include<stdio.h>

/**
 *main - Entry point of the program
 *Description: Prints the size of various types on the computer
 *Return: Always 0 (Success)
 */

main(void)
{
	printf("Size of Char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float:%d byte(s)\n", sizeof(float));
	return (0);
}
