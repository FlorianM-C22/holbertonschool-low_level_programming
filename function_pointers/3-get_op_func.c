#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user.
 * @s: the operator passed as argument to the program
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	int i;/*Index value*/

	/*Searching for operand in the array*/
	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);/*Returns associated function*/
		}
	}

	return (NULL);/*Returns NULL if operand not found*/
}
