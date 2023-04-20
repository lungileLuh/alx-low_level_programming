#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: a character to print
 *
 * Return: success 1.
 * On error, -1 is return, and errno is sets appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
