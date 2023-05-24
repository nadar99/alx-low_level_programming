#include <stdlib.h>
/**
 * int_index -  a function that searches for an integer.
 * @array: array
 * @size : size of array
 * @cmp : function pointer to the function to use in compare
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
			if (index > 0)
				return (i);
		}
	}
	return (-1);
}
