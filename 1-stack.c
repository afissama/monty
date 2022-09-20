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


int add_top(stack_t **h)
{
	stack_t *tmp;

    if (h == NULL || *h == NULL || stack_len(*h) < 2)
		return(0);
    
    tmp = (*h)->next;
    (*h)->n += tmp->n;
    (*h)->next = tmp->next;
    free(tmp);

    return (1); 
}
