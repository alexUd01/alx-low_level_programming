#include "calc.h"

/**
 * main - a program that performs simple operations
 * @argc: number of arguments passed to the program during runtime
 * @argv: an array of strings containing the arguments passed to the
 * program at runtime
 * Return: returns 0 (on success)
 *         returns 98, 99 or 100 (on error)
 */
int main(int argc,  char *argv[])
{
	int num1, num2, ans;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	ans = (*get_op_func(char *s))(num1, num2);
	printf("%d", ans);
	return (0);
}
