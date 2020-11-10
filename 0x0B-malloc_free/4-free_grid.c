#include "holberton.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: Pointer to 2-D array.
 * @height: height of the 2-D array.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
