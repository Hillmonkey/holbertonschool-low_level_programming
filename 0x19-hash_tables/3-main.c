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

    ht = hash_table_create(1024);
    exit_status = hash_table_set(ht, "betty", "holberton");
	exit_status = has_table_set(ht, "betty", "friedan");
    return (exit_status);
}
