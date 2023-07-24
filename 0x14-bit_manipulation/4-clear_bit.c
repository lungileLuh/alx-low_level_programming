#ifndef MAIN_H
#define MAIN_H

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index (starting from 0) of the bit to set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Error: Index is out of range. */
		return (-1);
	}

	unsigned long int mask = 1UL << index;
	*n &= ~mask;

	return (1);
}

#include <stdio.h>
#include "main.h"

int main(void)
{
	unsigned long int num = 42; /* Change this number to test different inputs */
	unsigned int index = 3;    /* Change this index to test different positions */

	int result = clear_bit(&num, index);

	if (result == 1)
	{
		printf("Bit at index %u in %lu is now set to 0: %lu\n", index, num, num);
	}
	else
	{
		printf("Error: Index out of range!\n");
	}

	return (0);
}
