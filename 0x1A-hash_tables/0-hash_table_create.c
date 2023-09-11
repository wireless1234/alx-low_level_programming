#include <stdio.h>
#include "hash_table.h"
/**
 * hash_table_create - create hash table with given size
 * @size: size of array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i = 0;

	hash_table_t *table = malloc(sizeof(*hash_table_t));
	table->size = size;
	table->array = malloc(size * sizeof(*hash_node_t));

	while(i < size)
	{
		table->array[i] = NULL;
	}
	return (table);
}
