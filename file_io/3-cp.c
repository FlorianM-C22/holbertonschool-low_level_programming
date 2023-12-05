#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument value
 * Return: 0 = SUCCESS
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, num;
	int bytes = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = creat(argv[2], 0664);

	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(source_fd);
		exit(99);
	}

	while (bytes == 1024)
	{
		bytes = read(source_fd, buffer, 1024);

		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		num = write(dest_fd, buffer, bytes);

		if (num < bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	}

	if (close(source_fd) == -1 || close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
