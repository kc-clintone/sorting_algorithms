#include "sort.h"

/**
 * swapper - Swaps two nodes in the list.
 * @hd: Pointer to head list.
 * @a: Pointer to the first node to swap.
 * @b: Second node to swap.
*/
void swapper(listint_t **hd, listint_t **a, listint_t *b)
{
(*a)->next = b->next;
if (b->next != NULL)
b->next->prev = *a;
b->prev = (*a)->prev;
b->next = *a;
if ((*a)->prev != NULL)
(*a)->prev->next = b;
else
*hd = b;
(*a)->prev = b;
*a = b->prev;
}

/**
 * insertion_sort_list - This fn sorts a doubly linked list of integers
 * using the insertion sort algorithm.
 * @list: Pointer to the head of the list of integers.
 * Description: Prints the list after each swap.
*/
void insertion_sort_list(listint_t **list)
{
listint_t *x, *o, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
for (x = (*list)->next; x != NULL; x = temp)
{
temp = x->next;
o = x->prev;
while (o != NULL && x->n < o->n)
{
swapper(list, &o, x);
print_list((const listint_t *)*list);
}
}
}
