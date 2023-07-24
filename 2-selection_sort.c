#include "sort.h"
#include <stdlib.h>

/**
 * selection_sort - a function that sorts an array of integers
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: nothing is returned
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min_index = 0;
	int min = 0, tmp = 0;

	if ((size < 2) || (array == NULL))
		exit(EXIT_SUCCESS);

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		min_index = i;
		for (j = i; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				min_index = j;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[i] = array[min_index];
			array[min_index] = tmp;
			print_array(array, size);
		}
	}
}
