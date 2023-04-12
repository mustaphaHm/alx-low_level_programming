#include "main.h"
/**
 * free_grid - functions that frees a 2dim array
 * @grid: the array
 * @height: int parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
