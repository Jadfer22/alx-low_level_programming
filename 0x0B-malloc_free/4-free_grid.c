#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees the  2 dimensional grid previously created
 * @grid: multidimensional grid to be freed
 * @height: height of the grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
