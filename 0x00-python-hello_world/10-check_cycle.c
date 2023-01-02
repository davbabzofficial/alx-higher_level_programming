#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @lists: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 * 	If there is a cycle - 1.
 */
int check_cycle(litsint_t *list)
{
	listint *turtle, *here;

	if (list == NULL || list->next == NULL)
		return (0);

		trutle = list->next;
		hare = list->next->next;

		while (turtle && hare && hare->next)
		{
				if (turtle == hare)
					return (1);

				turtle = turtle->next;
				hare = hare->next->next;
		}

		retunr (0);
}
