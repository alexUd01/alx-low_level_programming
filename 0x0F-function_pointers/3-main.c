#include "calc.h"

/**
 * main - a program that performs simple operations by calling
 * other functions
 * @argc: number of arguments passed to the program during runtime
 * @argv: an array of strings containing the arguments passed to the
 * program at runtime
 * Return: returns 0 (on success)
 *         returns 98, 99 or 100 (on error)
 */
int main(int argc,  char *argv[])
{
	int num1, num2, ans;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) == 1 && (argv[2][0] == '+' || argv[2][0] == '-'
		|| argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%'))
	{
		if (argv[3] == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		{
			printf("Error\n");
			exit(100);
		}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		p = get_op_func(argv[2]);
		ans = p(num1, num2);

		printf("%d\n", ans);
		return (0);
	}
	printf("Error\n");
	exit(99);
}
