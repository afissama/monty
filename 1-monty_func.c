#include "monty.h"
/**
 * monty_add - remove the first element from the stack
 *
 * @h: header
 * @n: the number n
 */
void monty_add(stack_t **h, unsigned int line)
{
	if (!add_top(h))
	{
		printf("L%d: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
}
