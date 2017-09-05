#include "hash_tables.h"

/**
 * insert_node - insert node into hash table
 * @ht: pointer to hash table data structure
 * @h_node: already created node to insert into hash table
 * Return: 1 on success, 0 on failure
 **/
int insert_node(hash_table_t *ht, hash_node_t *h_node)
{
	unsigned long int idx;
	hash_node_t *tmp;

	/* TABLE_SIZE should be same as ht->size */
	idx = key_index((const unsigned char *)(h_node->key), TABLE_SIZE);
	tmp = ht->array[idx];
	while (tmp)
	{
		/* test for key clash */
		if (strcmp(tmp->key, (const char *)(h_node->key)) == 0)
			return (0);
		tmp = tmp->next;
	}
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = h_node;
		return (1);
	}
	tmp = ht->array[idx];
	ht->array[idx] = h_node;
	h_node->next = tmp;
	return (1);
}

/**
 * hash_table_set - add key value pair to hash table
 * @ht: pointer to hash table data structure
 * @key: key string (must be unique)
 * @value: value string (uniqueness not required)
 * Return: 1 on success, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int status;
	hash_node_t *new_node;


	if (key == NULL || key[0] == '\0')
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	/* I don't think I need to malloc() *next here, change later if needed */

	status = insert_node(ht, new_node);
	if (status == 0)
		/*
		*  should I free key, value and node here?
		* free(new_node->key);
		* free(new_node->value);
		* free(new_node);
		 */
		return (0);
	else
		return (1);
}
