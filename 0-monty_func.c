#include "monty.h"
/**
 * monty_push - push bytecode execution
 * 
 * @h: heade 
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
 * monty_pall - push bytecode execution
 * 
 * @h: heade 
 * @n: the number n 
 */
void monty_pint(stack_t **h, unsigned int line)
{
    if (h== NULL || *h == NULL)
    {
        printf("L%d: can't pint, stack empty\n", line);
        exit(EXIT_FAILURE);
    }
    print_first_stack(*h);
}

