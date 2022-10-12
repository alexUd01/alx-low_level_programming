int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
		return (NULL);

	for (i = 0; )
}
