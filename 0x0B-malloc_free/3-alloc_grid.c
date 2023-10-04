#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input 1
 * @height: input 2
 * Return: pointer to a 2 dimensional array of integers (Success)
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **arr;

	arr = (int **)malloc(sizeof(int *) * height);
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (arr != NULL)
	{
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(rr[i]);
			}
			free(arr);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				arr[i] = (int *)malloc(sizeof(int *) * width);
			}
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			return (arr);
		}
	}
	else
	{
		free(arr);
		return (NULL);
	}
}
