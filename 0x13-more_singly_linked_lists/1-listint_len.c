#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked.
 * @h: pointer to the first node
 * Return: returns the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t ned = 0;

	while (h)
	{
		ned++;
		h = h->next;
	}
	return (ned);
}
