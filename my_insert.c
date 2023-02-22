#include "sort.h"
#include <stdbool.h>

/**
 * swap_nodes - swaps the values at two nodes
 * of a doubly linked list
 *
 * @a: pointer to the first node
 * @head: pointer to head of the list
 */

void swap_nodes(listint_t *a, listint_t **head)
{
	listint_t *b;

	b = a->next;
	a->next = b->next;
	if (b->next != NULL)
		b->next->prev = a;
	b->next = a;
	b->prev = a->prev;
	if (b->prev != NULL)
		b->prev->next = b;
	else
		*head = b;
	a->prev = b;
}

/**
 * insertion_sort_list - sorts a doubly linked
 * list of integers in ascending order
 * using the Insertion sort algorithm
 *
 * @list: pointer to the head of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *temp2;
	bool swapped;
	bool inner_swapped;

	temp = *list;
	while (temp->next != NULL)
	{
		swapped = false;
		if (temp->n > temp->next->n)
		{
			swap_nodes(temp, list);
			print_list(*list);
			swapped = true;
			temp2 = temp->prev;
			while (temp2->prev != NULL)
			{
				inner_swapped = false;
				if (temp2->prev->n > temp2->n)
				{
					swap_nodes(temp2->prev, list);
					print_list(*list);
					inner_swapped = true;
				}
				if (inner_swapped == false)
					break;
			}
		}
		if (swapped == false)
			temp = temp->next;
	}

}
