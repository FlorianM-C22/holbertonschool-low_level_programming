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
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* si premier noeud */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Compte le nombre de noeuds */
	i = 0;
	current = *h;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* Si idx trop grand */
	if (current == NULL)
	return (NULL);

	/* Si dernier noeud, ajoute à la fin */
	if (current->next == NULL)
	return (add_dnodeint_end(h, n));

	/* Sinon, insère au milieu */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
