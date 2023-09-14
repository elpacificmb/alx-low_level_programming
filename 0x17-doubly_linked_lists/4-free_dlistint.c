#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node;
	dlistint_t *next_node;

	if (head)
	{
		actual_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(actual_node);
			actual_node = next_node;
			next_node = next_node->next;
		}
		free(actual_node);
	}
}
