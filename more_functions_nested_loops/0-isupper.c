#include "main.h"

/**
 *_isupper - checks for uppercase with a newline
 *@c: character checked
 * Return: 0 Success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
