#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to be printed
 * @letters: Number of letters to be printed
 * Return: The number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, fd, wrt;
	char *txt;

	txt = malloc(letters);

	if (filename == NULL)
		return (0);

	if (txt == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(txt);
		return (0);
	}

	n = read(fd, txt, letters);

	wrt = write(1, txt, n);

	close(fd);

	return (wrt);
}
