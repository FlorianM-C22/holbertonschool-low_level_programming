#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 *@head: pointer to the head of the linked list
 *@index: index of the list where the new node should be added.
 * Return: the address of the new node, or NULL if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	/*Checks if list or head is NULL*/
	if (head == NULL || *head == NULL)
		return (-1);

	/*Assign the head of the list to the current*/
	current = *head;

	/*If index = 0, delete 1st node*/
	if (index == 0)
	{
		*head = current->next; /*Updating head to the next node*/
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	/*Iterate to the node at specified index or at end of list*/
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	/*If specified index is beyond end of the list, ERROR*/
	if (current == NULL)
		return (-1);

	temp = current->prev;
	temp->next = current->next;

	/*If deleted node is not the last one, update next's node pointer*/
	if (current->next != NULL)
		current->next->prev = temp;

	free(current);

	return (1);
}
