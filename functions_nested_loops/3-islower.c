#include "main.h"

/**
 * _islower - checks if lowercase
 * @c: character tested
 * Return: 1 if lowercase
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
