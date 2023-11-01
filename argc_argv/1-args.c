#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector (unused)
 * Return: 0 SUCCESS
*/
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
