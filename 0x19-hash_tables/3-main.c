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
    exit_status = hash_table_set(ht, "calif", "sacrament");
    exit_status = hash_table_set(ht, "texas", "houstonio");
    exit_status = hash_table_set(ht, "iowat", "des moine");
    exit_status = hash_table_set(ht, "minne", "st. pauls");
    exit_status = hash_table_set(ht, "washy", "olympiada");
    exit_status = hash_table_set(ht, "orgen", "salembalz");
    exit_status = hash_table_set(ht, "ariza", "scottsdal");
    exit_status = hash_table_set(ht, "bitch", "mohterfuc");
    exit_status = hash_table_set(ht, "rotty", "and nicer");

	exit_status = hash_table_set(ht, "newyk", "albanyx");
    return (exit_status);
}
