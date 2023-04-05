#include "lists.h"

/**
 * free_listint - frees a linked list of integers
 * @head: pointer to the head of the list to be freed
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head != NULL)
	{
		temporary = head;
		head = head->next;
		free(temporary);
	}
}
