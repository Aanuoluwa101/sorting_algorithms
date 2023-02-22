/**
 * swap - swaps two elements of an array
 * 
 * @idx1: pointer to the first element
 * @idx2: pointer to the second element
 */
void swap(int *idx1, int *idx2)
{
    int temp;

    temp = *idx1;
    *idx1 = *idx2;
    *idx2 = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order 
 * using the Selection sort algorithm
 * 
 * @arr: an array of integers
 * @size: size or length of the array
 */
void selection_sort(int *array, size_t size)
{
    int min_idx;
    int i;
    int j;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[i])
                min_idx = j;
        }
        if (i != min_idx)
            swap(&array[i], &array[min_idx]);
    }
}