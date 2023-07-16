#include <stdio.h>

/**
 * main - Entry point
 * description: 'the numbers of base 16 in lowercase'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 49; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
