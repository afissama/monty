#include "monty.h"

/**
 * mod_top - add top elements
 *
 * @h: head of stack
 * Return: int
 */
int mod_top(stack_t **h)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL || stack_len(*h) < 2)
		return (0);
	if ((*h)->n == 0)
		return (-1);

	tmp = (*h)->next;
	(*h)->n = tmp->n % (*h)->n;
	(*h)->next = tmp->next;
	free(tmp);

	return (1);
}

/**
 * free_stack - free stack
 *
 * @h: stack head
 */
void free_stack(stack_t *h)
{
	stack_t *current;

	while (h != NULL)
	{
		current = h;
		h = h->next;
		free(current);
	}
}
