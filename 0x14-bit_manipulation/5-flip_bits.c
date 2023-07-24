#ifndef MAIN_H
#define MAIN_H

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
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}

int main(void)
{
	unsigned long int num1 = 42; /* Change this number to test different inputs */
	unsigned long int num2 = 17; /* Change this number to test different inputs */

	unsigned int result = flip_bits(num1, num2);

	printf("Number of bits to flip from %lu to %lu: %u\n", num1, num2, result);
	return (0);
}
