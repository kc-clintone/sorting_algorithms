#include "sort.h"

/**
 * swapper - Swaps two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
*/
void swapper(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

/**
 * selection_sort - This func sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
*/
void selection_sort(int *array, size_t size)
{
int *min;
size_t x, y;

if (array == NULL || size < 2)
return;
for (x = 0; x < size - 1; x++)
{
min = array + x;
for (y = x + 1; y < size; y++)
min = (array[y] < *min) ? (array + y) : min;
if ((array + y) != min)
{
swapper(array + x, min);
print_array(array, size);
}
}
}
