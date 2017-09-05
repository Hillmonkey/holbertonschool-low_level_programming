#include "hash_tables.h"

/**
 * grab_value - returns value string associated with a key
 * @HN: pointer to a hash node
 * @key: key for search
 * Return: value string, or NULL if no match
 **/
const char *grab_value(hash_node_t *HN, const char *key)
{
	while (HN != NULL)
	{
		if (strcmp(HN->key, key) == 0)
			return (HN->value);
		HN = HN->next;
	}
	return (NULL);
}

/**
 * hash_table_get - retrieve value associated with a key
 * @HT: pointer to a hash table
 * @key: key string
 * Return: value string
 **/
char *hash_table_get(const hash_table_t *HT, const char *key)
{
	unsigned long int idx;
	/* unsigned long int hash; */

	idx = key_index((const unsigned char *)key, HT->size);
	/* hash = hash_djb2((const unsigned char *)key); */
	return ((char *)(grab_value((HT->array[idx]), key)));
}
