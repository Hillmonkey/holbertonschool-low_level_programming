#include "hash_tables.h"

/**
 * insert_node - insert node into hash table
 * @ht: pointer to hash table data structure
 * @h_node: already created node to insert into hash table
 * Return: 1 on success, 0 on failure
 * NOTE WELL: In this version, a key clash results in an updated value instead
 *            instead of EXIT_FAILURE
 **/
int insert_node(hash_table_t *ht, hash_node_t *h_node)
{
	unsigned long int idx;
	hash_node_t *tmp;

	idx = key_index((const unsigned char *)(h_node->key), ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		/* test for key clash */
		if (strcmp(tmp->key, (const char *)(h_node->key)) == 0)
		{
			tmp->value = h_node->value;
			return (EXIT_SUCCESS);
		}
		tmp = tmp->next;
	}
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = h_node;
		return (EXIT_SUCCESS);
	}
	tmp = ht->array[idx];
	ht->array[idx] = h_node;
	h_node->next = tmp;
	return (EXIT_SUCCESS);
}
