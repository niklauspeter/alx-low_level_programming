#include "main.h"

/**
* free_grid - function frees a 2d array
* created by alloc grid function
*@grid:the memory block to be freed
*@height:the height of the array
*Return:function returns void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
