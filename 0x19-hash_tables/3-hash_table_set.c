#include "hash_tables.h"

/**
 * hash_table_set - add key value pair to hash table
 * @ht: pointer to hash table data structure
 * @key: key string (must be unique)
 * @value: value strin (uniqueness not required)
 * Return: 1 on success, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int status;
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (EXIT_FAILURE);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	/* I don't think I need to malloc() *next here, change later if needed */

	status = insert_node(ht, new_node);
	if (status == EXIT_FAILURE)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}
