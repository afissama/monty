#include "monty.h"
/**
 * monty_add - remove the first element from the stack
 *
 * @h: header
 * @line: instruction line nb
 */
void monty_add(stack_t **h, unsigned int line)
{
	if (!add_top(h))
	{
		fprintf(stderr ,"L%d: can't add, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
}

/**
 * monty_nop - nothing
 *
 * @n: a number
 * @h: the stack
 */
void monty_nop(stack_t __attribute__ ((unused)) **h,
	 __attribute__ ((unused))unsigned int n)
{

}

/**
 * monty_sub - remove the first element from the stack
 *
 * @h: header
 * @n: instruction line nb
 */
void monty_sub(stack_t **h, unsigned int n)
{
	if (!sub_top(h))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
}
/**
 * monty_div - divide the first two stack
 *
 * @h: header
 * @n: instruction line nb
 */
void monty_div(stack_t **h, unsigned int n)
{
	int fd;

	fd = div_top(h);

	if (fd == 0)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", n);
		exit(EXIT_FAILURE);
	}

	if (fd == -1)
	{
		fprintf(stderr, "L%d: division by zero\n", n);
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
}
