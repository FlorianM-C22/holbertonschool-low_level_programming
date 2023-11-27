#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 *@head: pointer to the head of the linked list
 * Return: a pointer to the new node or NULL in case of failure
 */
void free_list(list_t *head)
{
	/*Declaring pointers for the current and the next node*/
	list_t *current = head;
	list_t *next;

	/*Iterating through the nodes till reaching the last one*/
	while (current != NULL)
	{
		/*Saving pointer to the next node before freeing the memory*/
		next = current->next;
		/*Freeing the memory for the string in the current node*/
		free(current->str);
		/*Free the memory allocated for the current node*/
		free(current);
		/*Move to the next node*/
		current = next;
	}
}
