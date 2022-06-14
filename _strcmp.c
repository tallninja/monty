#include "monty.h"

/**
 * _strcmp - check equality of 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if the string are equal, 0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	unsigned int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] != s2[1])
		return (0);

	return (1);
}
