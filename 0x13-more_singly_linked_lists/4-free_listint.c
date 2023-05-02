#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
}

