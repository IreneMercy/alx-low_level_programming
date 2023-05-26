#include "main.h"

/**
 * append_text_to_file - insert text at end of file
 * @filename: name of file appending to
 * @text_content: content we are appending
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, written, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
		written = write(fd, text_content, len);

		if (written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
