#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: pointer to the array
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp, swap;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1, k = i, swap = 0; j < size; j++)
		{
			if ((array[i] > array[j]) && (array[j] < array[k]))
				k = j, swap = 1;
		}
		if (swap)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
