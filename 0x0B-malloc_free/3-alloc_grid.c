#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: of the array
 * @height: of the array
 *
 * Return: pointer to the string if success.
 */
int **alloc_grid(int width, int height)
{
	int j, i;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **) malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));

		if (a[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
