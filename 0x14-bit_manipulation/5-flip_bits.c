#include "main.h"

/**
 * flip_bit - counts the number of bite to change
 * to get from one number to the next
 * @n: first numbers
 * @n: second numbers
 *
 * Return: number of bite to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
