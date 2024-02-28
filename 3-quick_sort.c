#include "sort.h"

void swapper(int *i, int *j);
int lom_part(int *arr, size_t sze, int l, int r);
void lom_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * lom_part - Orders a subset of an array of integers according to
 * the lomuto partition scheme.
 * @arr: Array of ints.
 * @sze: Size of array.
 * @l: The first index.
 * @r: The last index.
 * Return: Final partition index.
*/
int lom_part(int *arr, size_t sze, int l, int r)
{
int *turn, top, bottom;

turn = arr + r;
for (top = bottom = l; bottom < r; bottom++)
{
if (arr[bottom] < *turn)
{
if (top < bottom)
{
swapper(arr + bottom, arr + top);
print_array(arr, sze);
}
top++;
}
}
if (arr[top] > *turn)
{
swapper(arr + top, turn);
print_array(arr, sze);
}
return (turn);
}

/**
 * lom_sort - Implementing quicksort using recursion.
 * @array: Target array.
 * @size: Size of array.
 * @left: First index of target array.
 * @right: Last index of target array.
 * Description: Uses the Lomuto partition scheme.
 */
void lom_sort(int *array, size_t size, int left, int right)
{
int seg;

if (right - left > 0)
{
seg = lom_part(array, size, left, right);
lom_sort(array, size, left, part - 1);
lom_sort(array, size, part + 1, right);
}
}

/**
 * swapper - Swaps two elements in an array.
 * @i: The first element to swap.
 * @j: The second element to swap.
*/
void swapper(int *i, int *j)
{
int temp;

temp = *i;
*i = *j;
*j = temp;
}

/**
 * quick_sort - Sorts an array of integers in ascending
 * order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Uses the Lomuto partition scheme. Prints
 * the array after each swap of two elements.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
lom_sort(array, size, 0, size - 1);
}
