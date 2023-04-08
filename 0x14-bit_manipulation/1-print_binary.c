#include <stdio.h>

/**
 * print_binary - prints the binary similar of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if (n & (1ul << i))
			_putchar('1');
		{
		else
		}	_putchar('0')
	}
}

