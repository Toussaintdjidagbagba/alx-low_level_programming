#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_actu = *head;
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
	while (node_actu && cont != idx)
	{
		cont++;
		node_actu = node_actu->next;
	}

	/* general case */
	if (cont == idx && node_actu)
	{
		node_to_delete = node_actu->next;
		if (node_to_delete->next)
		node_to_delete->next->prev = node_actu;
		node_actu->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
