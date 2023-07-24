#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
*
* Return: The converted number,
* or 0 if there are invalid characters in the string or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			result = (result << 1) | (b[i] - '0');
		else
			return (0);
		i++;
	}

	return (result);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	const char *binary_str = "110010";
	unsigned int result = binary_to_uint(binary_str);

	if (result == 0 && binary_str != NULL)
	printf("Invalid input:binary string contains,
	characters other than 0 or 1.\n");
	else
		printf("The unsigned integer value is: %u\n", result);

	return (0);
}
