#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of linked list.
 * @head: a pointer to the first node int the linked list.
 * @index: index of the node to return
 *
 * Return: return NULL, if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
