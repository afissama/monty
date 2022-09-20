#include "monty.h"
/**
 * add_stack_begin - add node at the stack beginning
 * 
 * @head: stack head node 
 * @n: n value
 * Return: stack_t* 
 */
stack_t *add_stack_begin(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t *));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 * print_stack - prints stack from top to end
 * 
 * @head: node head 
 * Return: int 
 */
int print_stack(stack_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n);
	return (1 + print_stack(h->next));
}

/**
 * print_stack - prints stack first element of stack
 * 
 * @head: node head 
 * Return: int 
 */
int print_first_stack(stack_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n);
	return (1);
}

/**
 * remove_top - remove first element of the stack
 * 
 * @h: stack head node 
 * Return: int 
 */
int remove_top(stack_t **h)
{
	stack_t *temp;

	if (h == NULL || *h == NULL)
		return (-1);
	temp = *h;
	*h = (*h)->next;
	free(temp);
	return (0);
}

/**
 * swap_stack- swap the two first element in the stack
 * 
 * @h: stack head node 
 * Return: int 
 */
int swap_stack(stack_t **h)
{
	stack_t **node_a, *tmp;
	
	if (h == NULL || *h == NULL || stack_len(*h) < 2)
		return(0);

	node_a = &(*h)->next;
	tmp = *h;
	
	(*h) = (*node_a);
	(tmp)->next = (*node_a)->next;
	(*h)->next = tmp;
	return (1);
}
