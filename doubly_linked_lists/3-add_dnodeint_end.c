#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: pointer to the head of the linked list
 *@n: number of nodes to be added
 * Return: number of nodes in the linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
	return (0);

	/* Le nouveau nœud est le dernier, donc next doit être NULL */
	new_node->n = n;
	new_node->next = NULL;

	/* Si la liste est vide, le nouveau nœud = la tête de la liste */
	if (*head == NULL)
		*head = new_node;
	else
	{
	/* Sinon, parcourir la liste jusqu'à la fin  */
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		/* et ajouter le nouveau nœud */
		current_node->next = new_node;
		new_node->prev = current_node;
	}
	return (new_node);
}
