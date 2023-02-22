#include "sort.h"
#include <stdbool.h>
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
    int i;
    int j;
    int temp;

    for (i = 0; i < size; i++)
    {
        swapped = false;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + i];
                array[j + i] = temp;
                print_array((const *int)array, size);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
 }