#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *@h: pointer to the head of the linked list
 * Return: number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_s *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
