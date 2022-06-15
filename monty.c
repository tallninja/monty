#include "monty.h"
#define DELIMS " \t\n"
/**
 * monty - runs the bytecode in the file
 * @script: monty script
 * Return: exit code
 */

int monty(char *script)
{
	stack_t call_stack = NULL;
	char *line = NULL;
	unsigned int len = 0, exit_status = EXIT_SUCCESS, line_num = 0;
	void (*op_func)(stack_t**, unsigned int);

	call_stack = malloc(sizeof(stack_t));
	if (call_stack == NULL)
		return (error(MALLOC_ERROR));

	while(getline(&line, &len, script) != -1) /* read each line */
	{
		line_num += 1;
		tokens = strtow(line, DELIMS); /* tokenize a single line */
		if (tokens == NULL)
		{
			if (is_empty_line(line))
				continue;
			free_stack(&stack);
			return (error(error(MALLOC_ERROR)));
		}
		if (tokens[0][0] == '#') /* check for comments */
		{
			free_tokens();
			continue;
		}
		op_func = _getopfunc(tokens[o]);
		if (op_func == NULL) /* if opcode does not exist */
		{
			free_stack(&stack);
			free_tokens();
			exit_status = error(OPCODE_ERROR, line_num);
			break;
		}
		prev_token_len = get_arr_token_len();
		opcode(&stack, line_num);
		if (get_arr_token_len() != prev_token_len)
		{
			if (op_toks && op_toks[prev_tok_len])
				exit_status = atoi(op_toks[prev_tok_len]);
			else
				exit_status = EXIT_FAILURE;
			free_tokens();
			break;
		}
		free_tokens();
	}
	free_stack(&stack);

	if (line != NULL && *line == 0)
	{
		free(line);
		return (error(MALLOC_ERROR));
	}

	free(line);
	return (exit_status);
}
