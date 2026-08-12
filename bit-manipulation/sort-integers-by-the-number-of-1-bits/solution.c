int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int* sortByBits(int* arr, int arrSize, int* returnSize) {

    *returnSize = arrSize;

    for (int i = 0; i < arrSize; i++)
        arr[i] += (__builtin_popcount(arr[i]) << 14);

    qsort(arr, arrSize, sizeof(int), compare);

    for (int i = 0; i < arrSize; i++)
        arr[i] &= (1 << 14) - 1;

    return arr;
}