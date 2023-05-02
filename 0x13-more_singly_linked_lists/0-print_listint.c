#include "lists.h"


/**
 * print_listint - prints elements in list.
 * @h: pointer to the first node .
 *
 * Return: return number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t ned = 0;

	while (h)
	{
		printf("%d\n", h->n);
	ned++;

	h = h->next;
	}

		return (ned);
}
