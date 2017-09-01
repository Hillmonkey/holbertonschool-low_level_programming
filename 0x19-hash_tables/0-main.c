#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int i, size = 1024;

    ht = hash_table_create(size);
    printf("%p\n", (void *)ht);

	for (i = 0; i < size; i++)
	{
		printf("\t%lu %p\n", i,(void *)ht->array[(int)i]);
	}		
    return (EXIT_SUCCESS);
}
