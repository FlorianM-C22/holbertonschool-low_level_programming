#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *_atoi -  convert a string to an integer
 *@s: string to be converted
 *Return: Always 0.
 */
int _atoi(char *s)
{
	int result = 0; /*Result variable*/
	int sign = 1; /*Here to manage '+' and '-' signs*/

	/*Ignore spaces at the start of a string */
	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
	/*Deals with the signs '+' and '-'*/
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	/*Converts the string*/
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
