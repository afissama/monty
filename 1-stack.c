#include "monty.h"

/**
 * stack_len - get the stack len
 *
 * @h: stack head
 * Return: size_t
 */
size_t stack_len(stack_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + stack_len(h->next));
}

/**
 * add_top - add top elements
 *
 * @h: head of stack
 * Return: int
 */
int add_top(stack_t **h)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL || stack_len(*h) < 2)
		return (0);

	tmp = (*h)->next;
	(*h)->n += tmp->n;
	(*h)->next = tmp->next;
	free(tmp);

	return (1);
}

/**
 * sub_top - sub top elements
 *
 * @h: head of stack
 * Return: int
 */
int sub_top(stack_t **h)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL || stack_len(*h) < 2)
		return (0);

	tmp = (*h)->next;
	(*h)->n = tmp->n - (*h)->n;
	(*h)->next = tmp->next;
	free(tmp);
	return (1);
}

/**
 * div_top - divide second elem by first
 *
 * @h: head of stack
 * Return: int
 */
int div_top(stack_t **h)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL || stack_len(*h) < 2)
		return (0);
	if ((*h)->n == 0)
		return (-1);

	tmp = (*h)->next;
	(*h)->n = tmp->n / (*h)->n;
	(*h)->next = tmp->next;
	free(tmp);
	return (1);
}

/**
 * mul_top - multiply second elem by first
 *
 * @h: head of stack
 * Return: int
 */
int mul_top(stack_t **h)
{
	stack_t *tmp;

	if (h == NULL || *h == NULL || stack_len(*h) < 2)
		return (0);

	tmp = (*h)->next;
	(*h)->n = tmp->n * (*h)->n;
	(*h)->next = tmp->next;
	free(tmp);
	return (1);
}
