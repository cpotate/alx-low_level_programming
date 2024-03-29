#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list to be free.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
