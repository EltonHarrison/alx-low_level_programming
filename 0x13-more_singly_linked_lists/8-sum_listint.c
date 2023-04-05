#include "lists.h"

/**
 * sum_listint - gives the sum of all data(n) of a listint _linked list
 * @head: pointer to the head node of the linked list
 * Return: The sum of all the data(n) in the lists or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
