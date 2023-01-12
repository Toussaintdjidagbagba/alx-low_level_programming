#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_actu = *h, *n_node;
	unsigned int index, nc = 0;

	/* create node */
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		n_node->prev = NULL;
		n_node->next = *h;
		if (*h)
			(*h)->prev = n_node;
		*h = n_node;
		return (*h);
	}

	/* search of position to insert */
	index = idx - 1;
	while (node_actu && nc != index)
	{
		nc++;
		node_actu = node_actu->next;
	}

	/* general case */
	if (nc == index && node_actu)
	{
		n_node->prev = node_actu;
		n_node->next = node_actu->next;
		if (node_actu->next)
			node_actu->next->prev = n_node;
		node_actu->next = n_node;
		return (n_node);
	}
	free(n_node);
	return (NULL);
}
