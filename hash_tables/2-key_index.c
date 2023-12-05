#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: Hash key
 * @size: Size of the array of the hash table
 * Return: index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*Hash the Key using hash_djb2*/
	unsigned long int hash_value = hash_djb2((const unsigned char *)key);
	/*Map Hash Value to Index*/
	unsigned long int index = hash_value % size;
	/*Return Index*/
	return (index);
}
