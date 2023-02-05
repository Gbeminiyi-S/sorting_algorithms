#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, temp;

	if (array)
	{
		while (i < size && array[i + 1])
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				i = 0;
				print_array(array, size);
				bubble_sort(array, size);
			}
			i++;
		}

	}
}
