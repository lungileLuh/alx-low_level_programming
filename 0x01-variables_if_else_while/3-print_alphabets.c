#include <stdio.h>
/**
 * main - a program that prints lowercase and uppercase alphabets
 *
 * Return: return 0
 */
int main(void)
{
	char ch, cap;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
