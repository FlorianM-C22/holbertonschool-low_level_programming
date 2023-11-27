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
	struct node *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
