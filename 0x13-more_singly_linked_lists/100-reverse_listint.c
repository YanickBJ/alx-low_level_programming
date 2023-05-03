#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list.
 * @head: pointer to the first element in the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	return (prev);
}
