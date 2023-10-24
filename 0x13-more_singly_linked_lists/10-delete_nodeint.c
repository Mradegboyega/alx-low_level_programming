#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (count == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		count++;
		prev = temp;
		temp = temp->next;
	}

	return (-1);
}
