#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely
 *
 * @head: A pointer to the first node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *loop;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current->next >= current)
		{
			loop = current->next;
			while (loop != current)
			{
				count++;
				printf("[%p] %d\n", (void *)loop, loop->n);
				loop = loop->next;
			}
			 printf("-> [%p] %d\n", (void *)loop, loop->n);
			 exit(98);

		}
		current = current->next;
	}
	return (count);

}
