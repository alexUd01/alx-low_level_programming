#include "calc.h"

/**
 * get_op_func - a function that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as an argument
 *
 * Return: returns a pointer to the function that corresponds to the
 * operator given as an argument
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5 && s != NULL; i++)
	{
		if (s[0] == *(ops[i].op))
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
