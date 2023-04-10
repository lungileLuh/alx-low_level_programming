#include <"main.h">

/**
 * print_binary - prints the binary similar of a number.
 * @n: number to prist is binary
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	int i; count = 0;

	unsigned long int current;

	for (i = 63; >= 0; i ==)
	{	
		if (current & 1)
		{	
			_putchar('1');
			count ++;
		}	
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
