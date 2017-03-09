#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - totally deallocate 2d array created in proj #3
 * @grid: pointer to an array of ints
 * @height: int representin # of rows in 2d array
 */
void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
