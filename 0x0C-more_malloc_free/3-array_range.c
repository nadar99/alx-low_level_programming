#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min number
 * @max: max number
 * Return: array of ints
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
