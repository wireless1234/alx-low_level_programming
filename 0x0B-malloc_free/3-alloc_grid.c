#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *alloc_grid - create and initialize 2D array
 *@width: columns
 *@height: rows
 *Return: new 2D array
 */
int **alloc_grid(int width, int height)
{
	int **newgrid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	newgrid = (int **)malloc(height * sizeof(int));
	if (newgrid == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		newgrid[i] = (int *)malloc(width * sizeof(int));
		if (newgrid[i] == NULL)
			return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			newgrid[i][j] = 0;
		}
	}
	return (newgrid);
}
