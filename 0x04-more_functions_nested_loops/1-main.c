#include "main.h"

/**
 * main - made for the purpose of testing _isdigit function
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = '9';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
