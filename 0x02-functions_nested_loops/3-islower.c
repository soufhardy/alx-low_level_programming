#include "main.h"

/**
 * islower - function that checks for lowercase character
 * @c : the character to be cheked
 * return: 1 for lowercase character or 0 for anyting else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

