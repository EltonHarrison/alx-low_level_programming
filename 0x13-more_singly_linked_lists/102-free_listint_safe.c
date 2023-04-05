#include "lists.h"
/**
 * free_listint_safe - frees a listint list safely
 * @h: A pointer to head of the list
 *
 * Return: The size of the list was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tempo;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		tempo = current;
		current = current->next;
		free(tempo);
		if (tempo <= current)
			break;
	}

	*h = NULL;

	return (size);
}
