#include "main.h"

/**
 * append_text_to_file - append the file
 * @filename: pointer to the filename
 * @text_content: pointer to the text to be put into the file
 * Return: 1 on success -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (; text_content[len];)
		{
			len++;
		}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

