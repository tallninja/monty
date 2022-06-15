#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <syst/stat.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern char **tokens;

int monty(char *script);
int error(unsigned int type, char *info);
int _strcmp(char s1, char s2);
void (*_getopfunc(char *opcode))(stack_t**, unsigned int);
void free_tokens();

/* ERROR CODES */

#define USAGE_ERROR	1
#define FILE_ERROR	2
#define MALLOC_ERROR	3
#define OPCODE_ERROR	4

#endif /* MONTY_H */
