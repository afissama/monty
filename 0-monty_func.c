#include "monty.h"
/**
 * monty_push - push bytecode execution
 *
 * @h: header
 * @n: the number n
 */
void monty_push(stack_t **h, unsigned int n)
{
	add_stack_begin(h, n);
}

/**
 * monty_pall - push bytecode execution
 *
 * @h: heade
 * @n: the number n
 */
void monty_pall(stack_t **h, unsigned int __attribute__ ((unused)) n)
{
	print_stack(*h);
}

/**
 * monty_pint - print the first element
 *
 * @h: heade
 * @line: intruction line
 */
void monty_pint(stack_t **h, unsigned int line)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	print_first_stack(*h);
}

/**
 * monty_pop - remove the first element from the stack
 *
 * @h: heade
 * @line: intruction line
 */
void monty_pop(stack_t **h, unsigned int line)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	remove_top(h);
}

/**
 * monty_swap - swap the first two elements from the stack
 *
 * @h: header of stack
 * @line: intruction line
 */
void monty_swap(stack_t **h, unsigned int line)
{
	if (!swap_stack(h))
	{
		printf("L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
}
