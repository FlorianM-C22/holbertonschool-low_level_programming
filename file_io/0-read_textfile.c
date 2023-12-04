#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to be printed
 * @letters: Number of letters to be printed
 * Return: The number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1024];
	ssize_t n, fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);

	if (n == -1)
	{
		close(fd);
		return (0);
	}

	write(1, buf, n);

	return (n);

}
