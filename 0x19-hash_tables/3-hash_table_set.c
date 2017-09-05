#include "hash_tables.h"

/**
 * insert_node - insert node into hash table
 * @HT: pointer to hash table data structure
 * @HN: already created node to insert into hash table
 * Return: 1 on success, 0 on failure
 **/
int insert_node(hash_table_t *HT, hash_node_t *HN)
{
	unsigned long int idx;
	hash_node_t *tmp, *prev;

	idx = key_index((const unsigned char *)(HN->key), HT->size);
	if (HT->array[idx] == NULL)
	{
		HT->array[idx] = HN;
		return (1);
	}
	tmp = prev = HT->array[idx];
	while (tmp)
	{
		/* key clash => write over old value */
		if (strcmp(tmp->key, (const char *)(HN->key)) == 0)
		{
			if (tmp->value)
				free(tmp->value);
			tmp->value = strdup(HN->value);
			free(HN);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	/* no clash -- append node*/
	prev->next = HN;
	return (1);
}

/**
 * free_node -free a fully formed hash table node (no links to deal with)
 * @HN: node to be freed
 * Return: void
 **/
void free_node(hash_node_t *HN)
{
	free(HN->key);
	free(HN->value);
	free(HN);
}

/**
 * hash_table_set - add key value pair to hash table
 * @HT: pointer to hash table data structure
 * @key: key string (must be unique)
 * @value: value string (uniqueness not required)
 * Return: 1 on success, 0 otherwise
 **/
int hash_table_set(hash_table_t *HT, const char *key, const char *value)
{
	int status;
	hash_node_t *new_node;

	if (key == NULL || key[0] == '\0' || HT == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	/* I don't think I need to malloc() *next here, change later if needed */

	status = insert_node(HT, new_node);
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
