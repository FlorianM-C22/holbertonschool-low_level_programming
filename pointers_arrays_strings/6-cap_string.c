#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @char *: character string to be converted to uppercase
 * @str: string to test
 * Return: 0
 */
char *cap_string(char *str) /*Pointer to an array named str */
{
	size_t i;

	while (str[i] != '\0') /*For each character in the input string*/

		if/*state is INITIAL and character is not a separator*/
			/*Capitalize the character*/
			/*STATE = INITIAL*/
		else if /*state is IN_WORD and character is a word separator*/
			/*State = INITIAL*/
		else if /* state is IN_WORD*/
			/*Convert character to lowercase*/

	return (str);
}
