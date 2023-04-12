#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charecter c to stdout
 * @c: the character to prints 
 *
 * Return: on the success 1.
 * on error, -1 is returned, and errno is sets appropriately.
 */
int _putchar (char c)
{
	return (write(1, &c 1));
}
