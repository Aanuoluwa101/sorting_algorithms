
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
