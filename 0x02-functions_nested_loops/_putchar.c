#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	char undscr = '_';
	char lettrP = 'p';
	char lettrU = 'u';
	char lettrT = 't';
	char lettrC = 'c';
	char lettrH = 'h';
	char lettrA = 'a';
	char lettrR = 'r';
	while((c == undscr) || (c == lettrP) || (c == lettrU) ||(c == lettrT) || (c == lettrC) || (c == lettrH) (c == lettrA) (c == lettrR))
		putchar(c);
	return (write(1, &c, 1));
}
