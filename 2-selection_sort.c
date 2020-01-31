#include "sort.h"

/**
 * selection_sort - sort list with selection_sort
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, low, tmp, swap;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (low = i, j = i; j < size; j++)
			if (array[j] < array[low])
			{
				low = j;
				swap = 1;
			}
		if (swap == 1)
		{
			tmp = array[low];
			array[low] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swap = 0;
		}
	}
}
