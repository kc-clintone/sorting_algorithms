#include "sort.h"
/**
 * bubble_sort - This function sorts an array of integers in ascending
 * order using Bubble sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 * Description: Prints the array after each attempt.
*/
void bubble_sort(int *array, size_t size)
{
size_t x, r;
int tmp;
size_t k;
int swapped;

if (array == NULL || size <= 1)
return;
for (x = 0; x < size - 1; x++)
{
swapped = 0;
for (r = 0; r < size - 1 - x; r++)
{
if (array[r] > array[r + 1])
{
tmp = array[r];
array[r] = array[r + 1];
array[r + 1] = tmp;
swapped = 1;
/* Print the array after each swap */
for (k = 0; k < size; k++)
{
printf("%d", array[k]);
if (k < size - 1)
printf(", ");
}
printf("\n");
}
}
/* If no swapping occurred, array is already sorted */
if (!swapped)
break;
}
}
