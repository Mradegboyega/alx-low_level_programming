#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
