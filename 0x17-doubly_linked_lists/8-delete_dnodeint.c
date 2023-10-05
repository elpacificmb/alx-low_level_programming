#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux_node = *head;
	dlistint_t *node_to_delete = *head;
	unsigned int idx;
	unsigned int cont = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* search of position to delete */
	idx = index - 1;
	while (aux_node && cont != idx)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* general case */
	if (cont == idx && aux_node)
	{
		node_to_delete = aux_node->next;
		if (node_to_delete->next)
		node_to_delete->next->prev = aux_node;
		aux_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
