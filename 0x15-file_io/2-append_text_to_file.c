#include "main.h"

/**
 * append_text_to_file - insert text at end of file
 * @filename: name of file appending to
 * @text_content: content we are appending
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, written_bytes, actions;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	actions = open(filename, O_WRONLY | O_APPEND);
	written_bytes = write(actions, text_content, len);

	if (actions == -1 || written_bytes == -1)
		return (-1);

	close(actions);

	return (1);
}
