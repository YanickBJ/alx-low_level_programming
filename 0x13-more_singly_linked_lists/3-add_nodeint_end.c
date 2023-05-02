#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the end
 * @head: pointer to  the first element in the list
 * @n: integer n to add in a new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;

last->next = new;
return (new);
}

