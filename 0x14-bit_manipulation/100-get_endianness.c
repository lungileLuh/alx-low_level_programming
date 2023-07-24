 #ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *ptr = (char *)&test;

	if (*ptr == 1)
	{
		/* The first byte in memory is 1, indicating little-endian.*/
		return (1);
	}
	else
	{
		/* The first byte in memory is 0, indicating big-endian.*/
		return (0);
	}
}

int main(void)
{
	int endianness = get_endianness();

	if (endianness == 1)
	{
		printf("This system is little-endian.\n");
	}
	else
	{
		printf("This system is big-endian.\n");
	}

	return (0);
}
