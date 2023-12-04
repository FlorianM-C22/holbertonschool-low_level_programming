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

	if (file_from == NULL | file_from == NULL)
		dprintf("Usage: cp file_from file_to\n");
		exit(97);

	source_fd = open(file_from, O_RDONLY);

	if (source_fd == -1)
	{
		dprintf("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(97);
	}

	if (/*Cannot create OR write to file_to fails*/)
		dprintf("Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);

	if (/*Cannot close file descriptor*/)
		dprintf("Error: Can't close fd FD_VALUE\n");
		exit(100);
}
