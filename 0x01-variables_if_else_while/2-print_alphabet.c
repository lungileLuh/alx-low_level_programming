#include <stdio.h>
/**
 * main - a program that prints alphabets
 *
 * Return: return 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
