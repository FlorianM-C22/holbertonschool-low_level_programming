#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *@h: pointer to the head of the linked list
 * Return: number of nodes in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
