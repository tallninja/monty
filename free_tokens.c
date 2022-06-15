#include "monty.h"

void free_tokens()
{
	unsigned int i;

	if (tokens == NULL)
		return;

	for (i = 0; tokens[i]; i++)
		free(tokens[i]);

	free(tokens);
}
