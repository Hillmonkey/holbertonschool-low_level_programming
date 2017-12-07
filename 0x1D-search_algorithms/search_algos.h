#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recurs_search(int *array, size_t lo, size_t hi, int value);
void print_subarray(int *array, size_t lo, size_t hi);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS */
