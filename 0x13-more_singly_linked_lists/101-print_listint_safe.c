#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_start = NULL;
	const listint_t *hare = head;
	const listint_t *tortoise = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			loop_start = head;
			break;
		}
	}

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current == loop_start)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (count);
		}

		current = current->next;
	}

	return (count);
}
