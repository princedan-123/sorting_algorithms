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
	size_t i = 0, count = 0;
	count = size;

	if (count < 2)
		exit(EXIT_SUCCESS);
	while (count > 1)
	{
		for(i = 0; i < count - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			count--;
		}
	}
}
