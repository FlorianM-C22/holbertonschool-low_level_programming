#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a list
 * @head: pointer to the list
 * @n: index value
 * Return: address of the last node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
		return (0);

	/*New node is last node, so we swap next to NULL*/
	new_node->n = n;
	new_node->next = NULL;

	/*If list is empty, new node is head*/
	if (*head == NULL)
		*head = new_node;

	else
	{
		/*Else, iterating through the list...*/
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		/*...to add the new node*/
		current_node->next = new_node;
		new_node->prev = current_node;
	}

	return (new_node);
}
