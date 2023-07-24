/* main.h */

#ifndef MAIN_H
#define MAIN_H

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index (starting from 0) of the bit to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */

/* set_bit.c */

#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index (starting from 0) of the bit to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
	{
		/* Error: Index is out of range. */
return (-1);
	}

	unsigned long int mask = 1UL << index;
	    *n |= mask;
return (1);
}

/* main.c */

#include <stdio.h>
#include "main.h"

int main(void)
{
	unsigned long int num = 42; /* Change this number to test different inputs */
	unsigned int index = 3;    /* Change this index to test different positions */

	int result = set_bit(&num, index);

	if (result == 1)
	{
		printf("Bit at index %u in %lu is now set to 1: %lu\n", index, num, num);
	}
	else
	{
		printf("Error: Index out of range!\n");
	}
return (0);
}

