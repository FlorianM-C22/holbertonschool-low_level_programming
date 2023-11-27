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

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%u] (nil)\n", current->len);

		else
			printf("[%u] %s\n", current->len, current->str);

		n++;
		current = current->next;
	}

	return (n);
}
