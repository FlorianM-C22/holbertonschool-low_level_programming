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
	dlistint_t *last_node, *temp;

	last_node = malloc(sizeof(dlistint_t));

	if (last_node == NULL)
		return (NULL);

	/*Add data to the next node*/
	last_node->n = n;

	/*Set pointers to the new node*/
	last_node->next = NULL;

	/*Check if list is empty*/
	if ((*head) == NULL)
		(*head) = last_node;

	else
	{
		temp = *head;

		/*Interate through the list to find the last node*/
		while (temp->next != NULL)
			temp = temp->next;

		/*Add the node at the end of the list*/
		temp->next = last_node;
		last_node->prev = temp;
	}
	return (last_node);
}
