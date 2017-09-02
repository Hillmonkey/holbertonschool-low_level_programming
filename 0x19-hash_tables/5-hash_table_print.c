#include "hash_tables.h"
/**
 * print_list - print all nodes under one hash table array element
 * @HN: pointer to a hash node
 * @comma: boolean indicating whether comma should be sent to stdout
 **/
void print_list(hash_node_t *HN, int comma)
{
	while (HN != NULL)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", HN->key, HN->value);
		comma = TRUE;
		if (HN->next != NULL)
			putchar(' ');
		HN = HN->next;
	}
}

/**
 * hash_table_print - prints all key/value pairs in hash table
 * @ht: pointer to hash table
 * Return: nothing
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = FALSE;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			print_list(ht->array[i], comma);
			comma = TRUE;
		}
	}
	printf("}\n");
}
