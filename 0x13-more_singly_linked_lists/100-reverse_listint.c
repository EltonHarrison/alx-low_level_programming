#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list of integers
 *
 * @head: A pointer to a pointer to the first node of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;															    }

	return (prev);
}
