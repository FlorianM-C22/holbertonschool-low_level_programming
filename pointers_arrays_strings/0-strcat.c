#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *main - check main.h
 *Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	strcpy(dest, src);

	return (dest_start);
}
