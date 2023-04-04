#include "lists.h"
/**
 * listint_len - prints the length of a linked lists of integers
 *
 *@h: A pointer to the head node of the linked list.
 *
 *Return: The number of elements in a linked list.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
			count++;
	}

	return (count);
}



