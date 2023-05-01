#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: linked list of type listint_t to print.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t nod = 0;

	{
	while (h != NULL)
		printf("%d\n", h->n);
	nod++;
	h = h->next;
	}
		return (nod);
}
