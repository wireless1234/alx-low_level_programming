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
	hash_node_t *new = NULL;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index_value = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index_value];
	if (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index_value];
	ht->array[index_value] = new;
	return (1);
}

