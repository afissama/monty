#include "monty.h"

instruction_t instruction[10] = {{"push", monty_push},
								{"pall", monty_pall}
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

	for (i = 0; i < 2; i++)
	{
		if (strcmp(tk, instruction[i].opcode)  == 0)
		{
			if (tk2 != NULL)
			{
				instruction[i].f(h, atoi(tk2));
				continue;
			}
			if ((strcmp("pall", tk) == 0) && (strcmp(tk, instruction[i].opcode)  == 0))
			{
				instruction[i].f(h, 0);
				continue;
			}
			printf("L%d: usage: push integer", line);
		}
	}
	
}