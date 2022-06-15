#include "monty.h"

/**
 * error - print an error message to stderr
 * @type: type of error
 * @info: data passed to the error message
 * Return: EXIT_FAILURE
 */

int error(unsigned int type, char *info)
{
	switch (type)
	{
		case USAGE_ERROR:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case FILE_ERROR:
			fprintf(stderr, "Error: Can't open file %s\n", info);
			break;
		case MALLOC_ERROR:
			fprintf(stderr, "Error: malloc failed");
			break;
		case OPCODE_ERROR:
			fprintf(stderr, "L%d: unknown instruction %s", tokens[0], info);
			break;
		default:
			fprintf(stdout, "Success");
	}

	return (EXIT_FAILURE);
}
