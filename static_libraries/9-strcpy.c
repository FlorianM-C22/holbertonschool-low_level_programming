#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *_strcpy -  copies the string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest.
 *@dest: source pointer
 *@src: destination pointer
 *Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
