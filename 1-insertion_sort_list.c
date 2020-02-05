#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list 
 * of integers in ascending order using the Insertion sort algorithm
 * @list: double pointer to the list head
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *tmp_head1, *tmp_head2;

if (list == NULL || *list == NULL)
return;

tmp_head1 = *list;
while (tmp_head1 != NULL)
{
tmp_head2 = tmp_head1->next;
while (tmp_head1->prev != NULL && tmp_head1->prev->n > tmp_head1->n)
{
tmp_head1->prev->next = tmp_head1->next;
if (tmp_head1->next != NULL)
tmp_head1->next->prev = tmp_head1->prev;
tmp_head1->next = tmp_head1->prev;
tmp_head1->prev = tmp_head1->next->prev;
tmp_head1->next->prev = tmp_head1;
if (tmp_head1->prev == NULL)
*list = tmp_head1;
else
tmp_head1->prev->next = tmp_head1;
print_list(*list);
}
tmp_head1 = tmp_head2;
}
}
