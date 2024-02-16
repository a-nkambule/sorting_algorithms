#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @n1: A pointer to the first node to swap.
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
(*n1)->next = n2->next;
if (n2->next != NULL)
n2->next->prev = *n1;
n2->prev = (*n1)->prev;
n2->next = *n1;
if ((*n1)->prev != NULL)
(*n1)->prev->next = n2;
else
*h = n2;
(*n1)->prev = n2;
*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *prev, *next;
if (list == NULL || *list == NULL)
return;
current = *list;
next = current->next;
while (next != NULL)
{
prev = current->prev;
if (current->n > next->n)
{
if (prev != NULL)
prev->next = next;
else
*list = next;
next->prev = prev;
current->prev = next;
current->next = next->next;
if (next->next != NULL)
next->next->prev = current;
next->next = current;
next = current->next;
printf("List after swapping: ");
print_list(*list);
}
else
{
current = next;
next = next->next;
}
}
}
