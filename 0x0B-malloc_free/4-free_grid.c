#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2D array
 *
 * @grid : the 2D array
 * @height : the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height;  i++)
		free(grid[i]);
	free(grid);
}
