#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of a file.
 *@filename: the file to read from.
 *@text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wcount, len = 0;
	char *c = text_content;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (c)
	{
		while (*c != '\0')
		{
			len++;
			c++;
		}
	}

	wcount = write(fd, text_content, len);

	if (wcount == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
