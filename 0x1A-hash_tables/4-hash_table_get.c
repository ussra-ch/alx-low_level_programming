#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key string.
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;


	if (node == NULL)
		return (NULL);

	return (node->value);
}
