#include "monty.h"

int main(int argc, char *argv)
{
	FILE *script = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc !=2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	script = fopen(argv[1], "r");
	if (script == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[i]);
		exit(EXIT_FAILURE);
	}
	exit_code = monty(script_file);

	fclose(script);
	return(exit_code);
}
