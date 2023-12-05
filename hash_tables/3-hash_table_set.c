#include "hash_tables.h"

/**
 * create_node - function to create a new node
 * @key: hash key, cannot be empty
 * @value: value associated with the key.
 * Return: 1 = SUCCESS
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Malloc error\n");
		exit(EXIT_FAILURE);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: hash key, cannot be empty
 * @value: value associated with the key.
 * Return: 1 = SUCCESS
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*Use the key_index function to calculate the index for the key*/
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *new_node = create_node(key, value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
