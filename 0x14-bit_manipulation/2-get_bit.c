#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to get the bit value.
 * @index: The index (starting from 0) of the bit to retrieve.
 *
 * Return: The value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Error: Index is out of range.*/
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	int bit_value = (n & mask) >> index;

	return (bit_value);
}

int main(void)
{
	unsigned long int num = 42; /* Change this number to test different inputs */
	unsigned int index = 3;    /* Change this index to test different positions */

	int result = get_bit(num, index);

	if (result != -1)
	{
		printf("Bit at index %u in %lu is: %d\n", index, num, result);
	}
	else
	{
		printf("Error: Index out of range!\n");
	}

	return (0);
}
