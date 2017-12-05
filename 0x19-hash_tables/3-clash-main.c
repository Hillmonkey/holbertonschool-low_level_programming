#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: exit status from last hash_table_set
 */
int main(void)
{
    hash_table_t *ht;
	int exit_status;

    ht = hash_table_create(5);
    exit_status = hash_table_set(ht, "betty", "holberton");
	hash_table_print(ht);
    exit_status = hash_table_set(ht, "betty", "000000000");
	hash_table_print(ht);
    exit_status = hash_table_set(ht, "betty", "111111111");
	hash_table_print(ht);
    return (exit_status);
}
