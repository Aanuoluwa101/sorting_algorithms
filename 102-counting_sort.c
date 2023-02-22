/**
 * get_max - finds the maximum value in an array of integers
 * @array: an array of integers
 * @size: size of the array
 * 
 * Returns: the greatest integer in the array
 */
int get_max(int *array, size_t size)
{
    int i;
    int max;

    max = array[0];
    for (i = 1; i < size, i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return (max);
}

/**
 * counting_sort - sorts an array of integers in ascending order 
 * using the Counting sort algorithm 
 * @array: the array to be sorted
 * @size: size or length of the array
 */
void counting_sort(int *array, size_t size)
{
    int max;
    int *count_arr;

    max = get_max(array, size);
    count_arr = calloc(sizeof(int) * max + 1);
    if (count_arr == NULL)
        exit(EXIT_FAILURE);

    for (i = 0; i < size; i++)
        count_arr[array[i]] += 1;
    
    for (i = 0; i < max; i++)
        count_arr[i + 1] = count_arr[i] + count_arr[i + 1];
    
    
    
}