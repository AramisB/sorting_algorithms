#include "sort.h"

/**
 * insertion_sort_list -  a function that sorts a doubly linked list 
 * of integers in ascending order using the Insertion sort algorithm
 *
 * @list: double pointet to the list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *sorted;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		sorted = current->prev;
		
		while (sorted != NULL && sorted->n > current->n)
		{
			if (current->next != NULL)
			{
				current->next->prev = sorted;
			}
			if (sorted->prev != NULL)
			{
				sorted->prev->next = current;
			}
			else
			{
				*list = current;
			}
			current->prev = sorted->prev;
			sorted->prev = current;
			sorted->next = current->next;

			if (current->next != NULL)
			{
				current->next->prev = sorted;
			}
			current->next = sorted;
			
			sorted = sorted->prev;
		}
		print_list(*list);
		current = current->next;
	}
}			
