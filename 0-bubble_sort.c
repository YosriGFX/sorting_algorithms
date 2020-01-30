#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * bubble_sort - sort list with bubble
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0;
	int *temp;
	int a, less;

	temp = array;
	less = array[size - 1];
	for (n = 0; n < size; n++)
	{
		if (less > temp[n])
		{
			less = temp[n];
		}
	}
	for (n = 0; n < size; n++)
	{
		if (temp[0] == less)
		{
			array = temp;
			break;
		}
		else if (n + 1 == size)
		{
			bubble_sort(temp, size);
		}
		else if (temp[n] > temp[n + 1])
		{
			a = temp[n];
			temp[n] = temp[n + 1];
			temp[n + 1] = a;
			print_array(temp, size);
		}

	}
}
