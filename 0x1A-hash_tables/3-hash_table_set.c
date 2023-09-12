#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - add item to hash table
 * @key: key
 * @value: value
 * @ht: hash table
 * Return: 0 (Failure) 1 (Success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_value;
	unsigned long int size = ht->size;
	hash_node_t *new = NULL;

	if (new == NULL)
		return (0);
	index_value = key_index((const unsigned char *)key, size);
	new = malloc(sizeof(hash_node_t));
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index_value];
	ht->array[index_value] = new;
	return (1);
}

