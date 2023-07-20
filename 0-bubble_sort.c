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
	int track = 1, temp = 0;
	size_t i = 0, j = 1;

	if (size < 2)
		exit(EXIT_SUCCESS);
	while (track != 0)
	{
		track = 0;
		for(i = 0; i < size; i++)
		{
			for(j = 1; j <= size; j++)
			{
				if (array[i] > array[j])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					print_array(array, size);
					track = 1;
				}
			}
		}
	}
}
