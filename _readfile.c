#include "monty.h"

char *_readfile(char *filename, size_t bytes)
{
	int fd, buff_size = bytes;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);

	buff = malloc(sizeof(char) * buff_size);
	if (buff == NULL)
		return (NULL);

	bytes_read = read(fd, buff, buff_size);
	if (bytes_read == -1)
	{
		free(buff);
		return (NULL);
	}
	
	close(fd);
	return (buff);
}
