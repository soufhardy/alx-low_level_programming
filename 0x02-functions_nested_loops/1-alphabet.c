#include "main.h"

/**
 * main - Entry point
 * description: ' prints the alphabet, in lowercase, followed by a new line'
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	
