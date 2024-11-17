#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère un tableau 2D précédemment créé par alloc_grid.
 * @grid: Pointeur vers le tableau 2D à libérer.
 * @height: Hauteur du tableau (nombre de lignes).
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

