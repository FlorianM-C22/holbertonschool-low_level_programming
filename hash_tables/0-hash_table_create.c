#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
		return (NULL);

	newTable->array = malloc(sizeof(hash_node_t *) * size);

	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		newTable->array[i] = NULL;

	newTable->size = size;

	return (newTable);
}
