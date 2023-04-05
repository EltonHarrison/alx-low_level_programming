#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the head node
 *
 * Return: the head node 's data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temporary;

	if  (*head == NULL)
		return (0);

	n = (*head)->n;
	temporary = *head;
	*head = (*head)->next;
	free(temporary);

	return (n);

}
