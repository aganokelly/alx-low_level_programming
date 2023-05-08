#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content:  NULL terminated string.
 * Return: 1 on success  -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int km, w, rd = 0;

	if (filename == NULL)
		return (-1);
	km = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (km == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[rd] != '\0')
			rd++;
		w = write(km, text_content, rd);
		if (w == -1)
			return (-1);
	}
	close(km);
	return (1);
}
