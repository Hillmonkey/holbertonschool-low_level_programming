#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of table to create
 * Return: pointer to newly created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HT;
	hash_node_t **HT_Array;

	HT = malloc(sizeof(hash_table_t *));
	if (HT == NULL)
		return (NULL);

	HT->size = size;
	HT_Array = calloc(size, sizeof(hash_node_t *));
	/* HT->array = malloc(size * sizeof(hash_node_t *)); */
	if (HT_Array == NULL)
	{
		free(HT);
		return (NULL);
	}
	HT->array = HT_Array;
	return (HT);
}
