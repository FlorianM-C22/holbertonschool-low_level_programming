#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s : pointer tested
 *Return: Always 0.
*/
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0') /*Calcul de la longueur de la chaîne*/
		{
		length++;
		s++;
		}

	s--; /*Ramener s à la fin de la chaîne*/

	while (length > 0) /*Affichage de la chaîne dans l'ordre inverse*/
		{
		_putchar(*s);
		s--;
		length--;
		}

_putchar('\n'); /*Afficher un saut de ligne*/
}
