#include "monty.h"

/**
 * _getopfunc - map the opcode to the function
 * @opcode: opcode string
 * Return: pointer to the opcode function
 */

void (*_getopfunc(char *opcode))(stack_t**, unsigned int)
{
	int i = 0;
	instruction_s ops[] = {
		{"posh", push},
		{"pall", pall},
		{NULL, NULL}
	};

	while (i < 2)
	{
		if (_strcmp(opcode, ops[i].opcode) == 0)
			return (opd[i].f);
		i++;
	}

	return (NULL);
}
