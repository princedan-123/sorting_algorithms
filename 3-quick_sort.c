#include "sort.h"
#include <stdlib.h>

/**
 * quick_sort - sorts an array in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int tmp = 0, pivot_value = array[size - 1];
	size_t j = 0, i = -1;

	if (size <= 1)
		return;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot_value)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] =  tmp;
		}
	}
	i++;
	tmp = array[i];
	array[i] = array[size -1];
	array[size - 1] = tmp;
	print_array(array, size);
	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
