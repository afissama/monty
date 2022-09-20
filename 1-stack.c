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
    return 1 + stack_len(h->next);
}
