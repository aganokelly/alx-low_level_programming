#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file
 * @filename: A pointer  of the file.
 * @letters: The number of letters the function should read
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	ssize_t p;
	ssize_t s;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	p = read(x, buffer, letters);
	s = write(STDOUT_FILENO, buffer, p);

	if (x == -1 || p == -1 || s == -1 || s != p)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(x);

	return (s);
}
