#include "lists.h"

/**
 * pop_listint - a function that deletes the head node in the list
 * @head: a pointer to the first node in the list
 * Return: returns the head node’s data (n)
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dat;
	{
	if (*head == NULL)
		return (0);
	}
	temp = *head;

	dat = temp->n;
		*head = temp->next;
	free(temp);

	return (dat);
}
