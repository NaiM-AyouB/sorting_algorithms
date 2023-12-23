#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @list: list
 * @n1: the first node to swap.
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t **list, listint_t *n1, listint_t *n2)
{
	n1->next = n2->next;
	n2->prev = n1->prev;

	n1->prev = n2;
	n2->next = n1;

	if (n2->prev == NULL)
		*list = n2;
	else
		n2->prev->next = n2;

	if (n1->next != NULL)
		n1->next->prev = n1;
}

/**
 * insertion_sort_list - Entry point
 * @list : list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = *list; current != NULL; current = tmp)
	{
		tmp = current->next;
		if (current->next != NULL && current->n > current->next->n)
		{
			swap_nodes(list, current, current->next);
			print_list((const listint_t *)*list);
			tmp = *list;
		}
	}
}
