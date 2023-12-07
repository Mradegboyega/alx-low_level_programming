#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the address of the head of the list
 * @idx: Index where the new node should be added
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h;
	unsigned int i;

	/* Check if the index is out of bounds */
	if (idx > 0 && *h == NULL)
		return (NULL);

	/* Create a new node and set its values */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Insert at the beginning if index is 0 */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	/* Traverse the list to find the position to insert the new node */
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	/* Check if the index is out of bounds */
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Adjust pointers to insert the new node */
	new_node->prev = current_node;
	new_node->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
