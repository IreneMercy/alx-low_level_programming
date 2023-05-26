#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters);
/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: terminated string to write to file
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, len;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written_bytes = write(fd, text_content, len);

	if (fd == -1 || written_bytes == -1)
		return (-1);

	close(fd);

	return (1);
}
