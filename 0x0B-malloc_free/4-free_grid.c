#include "main.h"
#include <stdlib.h>
/**
 * free_grid - program that print grid
 * @grid: grid
 * @height: height
 * Return: 0
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
