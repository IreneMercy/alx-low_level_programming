#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: terminated string to write to file
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t max_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		max_len = _strnlen(text_content, _SC_OPEN_MAX);
		bytes_written = write(fd, text_content, max_len);

		if (bytes_written == -1)
		{
			close(fd);
			return (1);
		}
	}

	close(fd);
	return (1);
}

/**
 * _strnlen - finds length of string
 * @str: string
 * @maxlen: maximum length
 * Return: len
 */

size_t _strnlen(const char *str, size_t maxlen)
{
	size_t len = 0;

	while (len < maxlen && str[len] != '\0')
	{
		len++;
	}

	return (len);
}
