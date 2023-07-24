#include <stdio.h>
#define MAIN_H

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to get the bit value.
 * @index: The index (starting from 0) of the bit to retrieve.
 *
 * Return: The value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
