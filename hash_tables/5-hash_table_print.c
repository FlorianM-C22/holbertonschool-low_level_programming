#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: 0 = SUCCESS
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first_pair = 1;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	/* Iterate through each index of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		/* Iterate through the linked list at the current index */
		while (current != NULL)
		{
			/* Print a comma and space before each pair (except the first) */
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			first_pair = 0;
		}
	}

	printf("}\n");
}
