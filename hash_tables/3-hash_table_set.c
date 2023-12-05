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
	unsigned long int index;
	hash_node_t *new_node, *temp;

	/* Validate that the key is not an empty string */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/*Checks for collisions*/
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
