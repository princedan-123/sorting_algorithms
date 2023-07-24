#include "sort.h"
#include <stdlib.h>

/**
 * bubble_sort - sorts an array of integers by comparing adjacent members
 * @array: a pointer to an integer
 * @size: the size of the array
 * Return: nothing is returned
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, count = 0, j = 0;
	int track = 0;

	count = size;

	if (count < 2)
		exit(EXIT_SUCCESS);
	if (array == NULL)
		exit(EXIT_SUCCESS);
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			track = 1;
		}
		if (track == 0)
			break;
	}
}
