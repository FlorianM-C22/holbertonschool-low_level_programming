#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to add or update the key/value to
 * @key: hash key, cannot be empty
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	/* Check for NULL pointers and invalid hash table size */
	if (ht == NULL || key == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);

	/* Get the index for the key using the hash function */
	index = key_index((const unsigned char *)key, ht->size);
	/* Set the current pointer to the head of the linked list  */
	current = ht->array[index];

	/* Traverse the linked list at the computed index */
	while (current != NULL)
	{
		/* Check if the current node's key matches the target key */
		if (strcmp(current->key, key) == 0)
			return (current->value);
		/* Move to the next node in the linked list */
		current = current->next;
	}
	/* Key not found, return NULL */
	return (NULL);
}
