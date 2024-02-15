#include "hash_tables.h"



hash_table_t *hash_table_create(unsigned long int size){

    /* allocate mem for the hash table struct */
	hash_table_t *hash = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * hash->size);

	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	/* initialize all buckets to NULL */
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}

