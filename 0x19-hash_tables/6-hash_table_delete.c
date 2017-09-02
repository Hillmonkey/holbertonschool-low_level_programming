#include "hash_tables.h"

/**
 * free_list - free all the nodes in a list
 * @head: pointer to head node of list
 * Return: void
 **/
void free_list(hash_node_t *head)
{
	hash_node_t *tmp, *tmp2;

	tmp = tmp2 = head;
	while (tmp != NULL)
	{
		free(tmp->key);
		free(tmp->value);
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
}

/**
 * hash_table_delete - delete the whole hash table
 * @ht: pointer to hash table
 * Return: nothing
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
			free_list(ht->array[idx]);
	}
	free(ht->array);
	free(ht);
}
