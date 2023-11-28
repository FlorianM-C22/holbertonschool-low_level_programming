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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	/*Checks if malloc succeeded*/
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, set the new node as the head */
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		/*If list empty, set the new node as the head*/
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: pointer to the head of the linked list
 *@n: number of nodes to be added
 * Return: number of nodes in the linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
		/* If the list is empty, the new node is now the first one */
		*head = new_node;
	else
	{
		/* Iterate through the last node of the list */
		while (current->next != NULL)
			current = current->next;

		 /* Adding the new node at the end of the list */
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
