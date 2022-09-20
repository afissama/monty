#include "monty.h"

/**
 * monty - run instruction
 *
 * @h: stack head
 * @tk: token 1
 * @tk2: token 2
 * @line: instruction line nb
 */
void monty(stack_t **h, char *tk, char *tk2, unsigned int line)
{
	int i;

	instruction_t instruction[11] = {{"push", monty_push}, {"pall", monty_pall},
									 {"pint", monty_pint}, {"pop", monty_pop},
									 {"swap", monty_swap}, {"add", monty_add},
									 {"nop", monty_nop}, {"sub", monty_sub},
									 {"div", monty_div}, {"mul", monty_mul},
									 {"mod", monty_mod}
									};
	for (i = 0; i < 11; i++)
	{
		if (strcmp(tk, instruction[i].opcode)  == 0)
		{
			if ((strcmp("push", tk) == 0))
			{
				if (tk2 != NULL)
				{
					instruction[i].f(h, atoi(tk2));
					break;
				}
				fprintf(stderr, "L%d: usage: push integer\n", line);
				exit(EXIT_FAILURE);
			}
			instruction[i].f(h, line);
			break;
		}
		if (i == 10)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line, tk);
			exit(EXIT_FAILURE);
		}
	}
}
