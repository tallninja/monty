#include "monty.h"

/**
 * getopfunc - map the opcode to the function
 * @opcode: opcode string
 * Return: pointer to the opcode function
 */

void (*getopfunc(char *opcode))(stack_t**, unsigned int)
{
	int i = 0;
	instruction_s ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	while (i < 2)
	{
		if (strcmp(opcode, ops[i].opcode) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
