#include "lists.h"

/**
 * print_listint_safe - a function that prints a linked list
 * @head: a pointer to the first node in the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head;
	const listint_t *prev = NULL;

	while (temp != NULL)
	{

		printf("[%p]%d\n", (void *)temp, temp->n);
		count++;

		if (temp < temp->next && prev < temp)
		{
			prev = temp;
			temp = temp->next;
		}
		else

		{
			temp = temp->next;
			printf("->[%p]%d\n", (void *)temp, temp->n);

			break;
		}
	}

	if (temp == NULL)
	{
		return (count);
	}
	else
	{
		printf("->[%p]%d\n", (void *)temp, temp->n);
		printf("->[%p]%d\n", (void *)prev, prev->n);

		exit(98);
	}
}
