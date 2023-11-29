#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: pointer to the head of the linked list
 *@idx: index of the list where the new node should be added.
 *@n: position of the node inserted
 * Return: 0 SUCCESS
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	unsigned int i;
	unsigned int length_of_list = 0;
	dlistint_t *temp = *h;

	while (temp != NULL)
	{
		length_of_list++;
		temp = temp->next;
	}

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx > length_of_list)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
	}
	else
	{
		if (*h == NULL)
		{
			free(new_node);
			return (NULL);
		}

		current = *h;

		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}

		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = current->next;

		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
		new_node->prev = current;
	}

	return (*h);
}
