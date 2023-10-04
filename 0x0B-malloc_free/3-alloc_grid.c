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
	int i = 0, j;

	int **arr;

	arr = (int **)malloc(sizeof(int *) * height);
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < height; i++)
		{
			arr[i] = (int *)malloc(sizeof(int *) * width);
			if (arr[i] == NULL)
			{
				free(arr[i]);
			}
			else
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}
			}
		}
		return (arr);
	}
}

