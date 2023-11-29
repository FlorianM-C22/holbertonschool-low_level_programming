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
	dlistint_t *current, *new_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/*If 1st node return current node*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	i = 0;
	current = *h;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}

