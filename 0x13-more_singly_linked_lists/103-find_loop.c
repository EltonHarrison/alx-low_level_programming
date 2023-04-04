#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: the address of the node where the loop starts,
 *          or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *down = head, *up = head;

	while (up != NULL && up->next != NULL)
	{
		down = down->next;
		up = up->next->next;

		if (down == up)
		{
			down = head;

			while (down != up)
			{
				down = down->next;
				up = up->next;
			}

			return (down);
		}


	}

	return (NULL);
}
