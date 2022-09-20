#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern instruction_t instruction[11];
void init_instruct(void);
char **getwords(char *line, char *words[], int maxwords);
stack_t *add_stack_begin(stack_t **head, int n);
int print_stack(stack_t *head);
int print_first_stack(stack_t *h);
size_t stack_len(stack_t *h);
int swap_stack(stack_t **h);
int remove_top(stack_t **h);
int add_top(stack_t **h);
int sub_top(stack_t **h);
int div_top(stack_t **h);
int mul_top(stack_t **h);
int mod_top(stack_t **h);
void monty_pop(stack_t **h, unsigned int line);
void monty_pint(stack_t **h, unsigned int line);
void monty_push(stack_t **h, unsigned int n);
void monty_swap(stack_t **h, unsigned int n);
void monty_add(stack_t **h, unsigned int n);
void monty_sub(stack_t **h, unsigned int n);
void monty_div(stack_t **h, unsigned int n);
void monty_mul(stack_t **h, unsigned int n);
void monty_mod(stack_t **h, unsigned int n);
void monty_nop(stack_t **h, unsigned int n);
void monty_pall(stack_t **h, unsigned int __attribute__ ((unused)) n);
void monty(stack_t **h, char *tk, char *tk2, unsigned int line);
#endif
