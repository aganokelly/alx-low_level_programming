#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success.-1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int km = 0;
	int l = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);
	km = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (km < 0)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		l = write(km, text_content, i);
		if (l < 0)
		{
			close(km);
			return (-1);
		}
	}
	close(km);
	return (1);
}
