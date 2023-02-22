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
	bool swapped;
	size_t i;
	size_t j;
	int temp;

	for (i = 0; i < size; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
