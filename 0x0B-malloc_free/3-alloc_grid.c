#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: of array.
 * @height: of array.
 * Return: NULL on error or invalid.
 */
int **alloc_grid(int width, int height)
{
	int i, j, **point;

	if (width <= 0 || height <= 0)
		return (NULL);

	point = malloc(height * sizeof(int *));
	if (point == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(point + i) = malloc(width * sizeof(int));
		if (*(point + i) == NULL)
		{
			for (; i >= 0; i--)
				free(*(point + i));
			free(point);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			point[i][j] = 0;
	return (point);
}
