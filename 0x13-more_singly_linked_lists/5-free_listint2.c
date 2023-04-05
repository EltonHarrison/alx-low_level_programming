#include "lists.h"

/**
 * free_listint2 - frees  a linked  list of integers and sets head to NULL
 * @head: Double pointer to the head of the list to be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if  (*head == NULL)
		return;

	while (*head != NULL)
	{
		temporary = *head;
		*head = (*head)->next;
		free(temporary);

	}

	*head = NULL;
}
