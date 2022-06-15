#include "monty.h"

/**
 * free_tokens - free the array of tokens
 * Return: nothing
 */

void free_tokens()
{
	unsigned int i;

	if (tokens == NULL)
		return;

	for (i = 0; tokens[i]; i++)
		free(tokens[i]);

	free(tokens);
}

/**
 * get_arr_token_len - return the length of the rokens array
 * Return: length of tokens array
 */

unsigned int get_arr_token_len()
{
	unsigned int len = 0;

	while (tokens[len])
		len++;

	return (len);
}
