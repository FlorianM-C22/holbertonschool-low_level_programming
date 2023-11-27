#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *@h: pointer to the head of the linked list
 * Return: number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	if (current == NULL)
	{
		printf("[0] (nil)");
		return (1);
	}

	while (current != NULL)
	{
		printf("%s\n", current->str);
		n++;
		current = current->next;
	}

	return (n);
}
