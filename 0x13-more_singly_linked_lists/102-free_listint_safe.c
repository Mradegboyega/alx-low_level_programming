#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (size);
}

