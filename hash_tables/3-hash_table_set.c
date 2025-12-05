#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;
	char *new_value;

	if (!ht || !key || !*key || !value)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

    /* Check if key already exists */
	while (node)
	{
	if (strcmp(node->key, key) == 0)
	{
	new_value = strdup(value);
	if (!new_value)
		return (0);
	free(node->value);
	node->value = new_value;
		return (1);
	}
	node = node->next;
	}

    /* Create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{	
	free(new_node->key);
	free(new_node->value);
	free(new_node);
	return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
