

#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Return number of bit needed to flip,
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	while (exclusive != 0)
	{
		count += exclusive & 1;
		exclusive >>= 1;
	}

	return count;
}
