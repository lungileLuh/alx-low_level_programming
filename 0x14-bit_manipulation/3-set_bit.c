#include "holberton.h"

/**
 * set_bit - set the value of a bit to 1 at the given index.
 * @n: a number.
 * @index: a index.
 * Return: 1 if it is worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = 1 << index;

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n | aux;
	return (1);
}
