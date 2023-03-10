#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size or length of the array
 */
void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i;
	size_t j;
	int temp;

	if (size >= 2)
	{
		for (i = 0, swapped = 1; i < size && swapped; i++)
		{
			swapped = 0;
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
					swapped = 1;
				}
			}
		}
	}
}
