#include "lists.h"

/**
 * check_cycle - checks  for cylce.
 * @list: pointer.
 * Return: 0 or 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = NULL;

	if (list == NULL)
		return (0);
	ptr1 = list;
	ptr2 = list;

	while (ptr1 && ptr2 && ptr2->next)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
			return (1);
	}
	return (0);
}
