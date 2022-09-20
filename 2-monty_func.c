#include "monty.h"

/**
 * monty_mod - compute modulo of first two stack
 *
 * @h: header
 * @n: the number n
 */
void monty_mod(stack_t **h, unsigned int n)
{
	int fd;

	fd = div_top(h);

	if (fd == 0)
	{
		printf("L%d: can't mod, stack too short\n", n);
		exit(EXIT_FAILURE);
	}

	if (fd == -1)
	{
		printf("L%d: division by zero\n", n);
		exit(EXIT_FAILURE);
	}
}
