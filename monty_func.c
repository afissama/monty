#include "monty.h"

instruction_t instruction[11] = {{"push", monty_push},
								{"pall", monty_pall},
								{"pint", monty_pint},
								{"pop", monty_pop},
								{"swap",monty_swap},
								{"add", monty_add},
								{"nop", monty_nop},
								{"sub", monty_sub},
								{"div", monty_div},
								{"mul", monty_mul},
								{"mod", monty_mod}
								};
/**
 * @brief 
 * 
 * @param tk 
 * @param tk2 
 * @param line 
 */
void monty(stack_t **h, char *tk, char *tk2, unsigned int line)
{
	size_t i;

	for (i = 0; i < 11; i++)
	{
		if (strcmp(tk, instruction[i].opcode)  == 0)
		{
			if ((strcmp("push", tk) == 0))
			{
				if (tk2 != NULL)
				{
					instruction[i].f(h, atoi(tk2));
					continue;
				}
				printf("L%d: usage: push integer\n", line);
				continue;
			}
			instruction[i].f(h, line);
			continue;
		}
	}
}