#include "holberton.h"
#include <stdlib.h>
/**
 * 
 *
 *
 */
void free_grid(int **grid, int height)
{
	int ,h; 
	
	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
