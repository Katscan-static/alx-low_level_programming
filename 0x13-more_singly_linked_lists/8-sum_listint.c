#include "lists.h"

/**
 * sum_listint - sums all numbers in ints
 * @head: head of the linked list
 *
 * Return: sum of int in linked lists
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hold;

	if (!head)
		return (0);

	hold = head;

	while (hold)
	{
		sum += hold->n;
		hold = hold->next;
	}

	return (sum);
}
