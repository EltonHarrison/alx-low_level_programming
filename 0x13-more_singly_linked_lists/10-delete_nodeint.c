#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 *
 * @head: A pointer to a pointer to the first node of the list
 * @index: The index of the node to delete, starting at 0.
 *
 * Return:  1 idf deletion succeeded or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t  *current, *prev;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	i = 0;
	current = *head;
	prev = NULL;
	while (i < index && current != NULL)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
