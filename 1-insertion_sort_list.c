#include "sort.h"
#include <stdio.h>


/**
 * insertion_sort_list - sort a doubly linked int list
 * in ascending order
 * @list: a listint_t object
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *dtmp;

	if (!(*list))
		return;
	tmp = *list;
	while (tmp && tmp->next)
	{
		if (tmp->n > (tmp->next)->n)
		{
			dtmp = tmp->next;
			tmp->next = dtmp->next;
			if (dtmp->next)
				dtmp->next->prev = tmp;
			tmp = tmp->prev;
			insert_sorted(list, dtmp);
			print_list(*list);
		}
		tmp = tmp->next;
	}

}

/**
 * insert_sorted - insert an element in a sorted listint_t object
 * @list: sorted listint_t object
 * @node: node to be inserted
*/
void insert_sorted(listint_t **list, listint_t *node)
{
	listint_t *tmp;

	if (!(*list) || !(node))
		return;
	if (node->n < (*list)->n)
	{
		node->next = *list;
		(*list)->prev = node;
		node->prev = NULL;
		*list = node;
		return;
	}
	tmp = *list;
	while (tmp && tmp->next)
	{
		if (tmp->n > node->n)
		{
			node->next = tmp;
			node->prev = tmp->prev;
			tmp->prev = node;
			node->prev->next = node;
			return;
		}
		tmp = tmp->next;
	}
}
