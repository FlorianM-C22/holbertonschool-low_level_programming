#include "main.h"

/**
 * _islower - checks for lowercase character
 * Returns 1 if lowercase
 * Returns 0 if uppercase
 */
int _islower (int c)
{
	if (c >= 'a' && c <= 'z')
		{
			return 1;
		}

	else
		{
			return 0;
		}
}
