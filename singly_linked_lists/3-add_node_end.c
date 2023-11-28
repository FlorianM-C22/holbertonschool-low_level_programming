#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *@head: pointer to the head of the linked list
 *@str: string to be duplicated
 * Return: a pointer to the new node or NULL in case of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	/*malloc for a new node*/
	list_t *new_node = malloc(sizeof(list_t));

	/*Checks if malloc succeeded*/
	if (new_node == NULL)
		return (NULL);

	/*Duplicates string using strdup*/
	new_node->str = strdup(str);

	/*Checks if strdup has succeeded*/
	if (new_node->str == NULL)
	{
		free(new_node);/*Freeing memory*/
		return (NULL);
	}
	/*Calculates the length of the string*/
	new_node->len = strlen(str);
	/*Updating next pointer to the former beginning of the list*/
	new_node->next = *head;
	/*Updating starting pointer to point to the new node*/
	*head = new_node;

	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to the head of the linked list
 *@str: string to be duplicated
 * Return: a pointer to the new node or NULL in case of failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	/*Duplicating string*/
	new_node->str = strdup(str);

	/*If strdup = FAILURE*/
	if (new_node->str == NULL)
	{
		free(new_node);/*Freeing memory for the node*/
		return (NULL);
	}

	/*Calculating the length of the node*/
	new_node->len = strlen(str);
	/*next is now NULL because it'll be the last one */
	new_node->next = NULL;

	/*If list is empty, the new node is now the 1st one*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*Iterating through the last node of the list*/
	while (current->next != NULL)
		current = current->next;

	/*Adding new node at the end of the list*/
	current->next = new_node;

	return (new_node);
}
