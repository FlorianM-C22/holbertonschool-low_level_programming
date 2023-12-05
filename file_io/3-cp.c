#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * cp - copies the content of a file to another file
 * @file_from: Source file
 * @file_to: Copy
 * Return: 1 = SUCESS
 */
int cp(const char *file_from, char *file_to)
{
	int source_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (file_from == NULL || file_from == NULL)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(file_from, O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC);

	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(source_fd);
		exit(99);
	}

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", file_to);
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}

	if (close(source_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}

	return (1);
}
