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
	int fd, results, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (len = 0; text_content[len];)
		len++;
	results = write(fd, text_content, len);

	if (results == -1)
		return (-1);
	close(fd);
	return (1);
}
