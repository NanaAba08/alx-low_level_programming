#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_grid - frees a 2 dimensional grid previously created
  * @grid: 2 dimensional grid
  * @height: the height dimension of the grid
  * Description: Free memory of the grid
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
