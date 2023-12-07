#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the address of the head of the list
 * @index: Index of the node to be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head, *temp;
	unsigned int i;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* Delete the first node if index is 0 */
	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	/* Traverse the list to find the node to be deleted */
	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;

	/* Check if the index is out of bounds */
	if (current_node == NULL)
		return (-1);

	/* Adjust pointers to delete the node */
	temp = current_node->prev;
	temp->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = temp;

	free(current_node);

	return (1);
}
