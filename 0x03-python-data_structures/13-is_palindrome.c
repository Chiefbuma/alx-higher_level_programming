#include "lists.h"

listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * reverse_listint - Reverses listint_t list.
 * @head: A pointer.
 *
 * Return: A pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head, *nxt, *prev = NULL;

	while (node)
	{
		nxt = node->nxt;
		node->nxt = prev;
		prev = node;
		node = nxt;
	}

	*head = prev;
	return (*head);
}

/**
 * is_palindrome - Checks palindrome.
 * @head: A pointer.
 *
 * Return:  - 0.
 *         or - 1.
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp, *rev, *mid;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	temp = *head;
	while (temp)
	{
		size++;
		temp = temp->next;
	}

	temp = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		temp = temp->next;

	if ((size % 2) == 0 && temp->n != temp->next->n)
		return (0);

	temp = temp->next->nxt;
	rev = reverse_listint(&temp);
	mid = rev;

	tmp = *head;
	while (rev)
	{
		if (temp->n != rev->n)
			return (0);
		temp = temp->nxt;
		rev = rev->nxt;
	}
	reverse_listint(&mid);

	return (1);
}
