#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 *@filename: the file to read from.
 *@letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *c;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	c = malloc(letters * sizeof(char));
	rcount = read(fd, c, letters);

	if (rcount == -1)
	{
		free(c);
		return (0);
	}

	wcount = write(STDOUT_FILENO, c, rcount);

	if (wcount == -1)
	{
		free(c);
		return (0);
	}

	free(c);
	close(fd);
	return (wcount);
}
