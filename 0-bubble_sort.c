#include "sort.h"

/**
 * bubble_sort - Sort an array of intergers in ascending order
 * @array: An array of integers to sort
 * @size: The size of the array
 * Description: Prints the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
int i, j;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
int temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
for (int k = 0; k < size; k++)
{
printf("%d ", array[k]);
}
printf("\n");
}
}
}
}
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
int array[] = {5, 3, 8, 2, 1};
size_t size = sizeof(array) / sizeof(array[0]);
printf("Original array: ");
for (int i = 0; i < size; i++)
{
printf("%d ", array[i]);
}
printf("\n\n");
bubble_sort(array, size);
printf("\nSorted array: ");
for (int i = 0; i < size; i++)
{
printf("%d ", array[i]);
}
printf("\n");
return (0);
}
