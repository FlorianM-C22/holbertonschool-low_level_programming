#include "main.h"

/**
 *c - character tested
 * _islower - checks for lowercase character
*Returns 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
