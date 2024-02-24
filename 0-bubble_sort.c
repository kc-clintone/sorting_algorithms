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
int swapped;

if (array == NULL || size <= 1)
{
return;
}

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
}
}

if (!swapped) 
{
break;
}
}
}
