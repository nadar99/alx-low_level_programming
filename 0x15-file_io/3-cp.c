#include "main.h"
#include <stdio.h>
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * main - check the code
 *@ac : arg count.
 *@argv : arg.
 * Return: Always 0.
 */
int main(int ac, char *argv[])
{
	int file_from, file_to, rcount, wcount;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	buffer = malloc(1024 * sizeof(char));
	rcount = read(file_from, buffer, 1024);
	if (file_from == -1 || rcount == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wcount = write(file_to, buffer, rcount);
	if (file_to == -1 || wcount == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	close_file(file_from);
	close_file(file_to);
	free(buffer);
	return (0);
}
