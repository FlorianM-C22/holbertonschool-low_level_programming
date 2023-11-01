#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * is_positive_number - checks if numbers are positive
 * @str: string to be tested
 * Return: 0 SUCCESS
*/
int is_positive_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return (1);
}
/**
 * main - adds numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 SUCCESS
*/
int main(int argc, char **argv)
{
	int sum = 0;
	int i, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[i]);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
