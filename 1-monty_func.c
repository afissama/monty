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

/**
 * monty_nop - nothing
 * 
 * @n: a number
 * @h: the stack
 */
void monty_nop(stack_t __attribute__ ((unused)) **h, unsigned int __attribute__ ((unused)) n)
{

}

/**
 * monty_sub - remove the first element from the stack
 *
 * @h: header
 * @n: the number n
 */
void monty_sub(stack_t **h, unsigned int n)
{
	if (!sub_top(h))
	{
		printf("L%d: can't add, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
}
/**
 * monty_div - remove the first element from the stack
 *
 * @h: header
 * @n: the number n
 */
void monty_div(stack_t **h, unsigned int n)
{
	int fd;

	fd = div_top(h);

	if (fd == 0)
	{
		printf("L%d: can't div, stack too short\n", n);
		exit(EXIT_FAILURE);
	}

	if (fd == -1)
	{
		printf("L%d: division by zero\n", n);
		exit(EXIT_FAILURE);
	}
}

/**
 * monty_mul - multiply first two stack
 *
 * @h: header
 * @n: the number n
 */
void monty_mul(stack_t **h, unsigned int n)
{
	if (!mul_top(h))
	{
		printf("L%d: can't mul, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
}
