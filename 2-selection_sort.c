#include "sort.h"

/**
 * swap_ints - swap two integers in an array
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_ints(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * selection_sort - sort an array of integers in ascending order
 * using the selection sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 * Description: Prints the array after each swap
 */
void selection_sort(int *array, size_t size)
{
int *min_index;
size_t j, k;
if (array == NULL || size < 2)
return;
for (j = 0; j < size - 1; j++)
{
min_index = arrray + j;
for (k = j + 1; k < size; k++)
min_index = (array[k] < min_index) ? (array + k) : min_index;
if ((array + j) != min_index)
{
swap_ints(array + j, min_index);
print_array(array, size);
}
}
}
