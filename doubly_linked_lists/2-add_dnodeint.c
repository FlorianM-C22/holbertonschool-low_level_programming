#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: pointer to the head of the linked list
 *@n: number of nodes to be added
 * Return: number of nodes in the linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));

	if (head == NULL || new_head == NULL)
	return (0);

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head;

	if (*head != NULL)
	(*head)->prev = new_head;

	*head = new_head;

	return (new_head);
}
