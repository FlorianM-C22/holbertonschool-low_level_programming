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

	/*Allocate memory for the text buffer*/
	txt = malloc(letters);

	/*Check if memory allocation was successful*/
	if (txt == NULL)
		return (0);

	/*Check if filename is NULL*/
	if (filename == NULL)
		return (0);

	/*Open the file for reading*/
	fd = open(filename, O_RDONLY);

	/*Check if the file opening was successful*/
	if (fd == -1)
	{
		free(txt);
		return (0);
	}

	/*Read up to 'letters' number of bytes from the file into the text buffer*/
	n = read(fd, txt, letters);

	/*Write the read content to the standard output (STDOUT_FILENO)*/
	wrt = write(STDOUT_FILENO, txt, n);

	close(fd);

	/*Return the number of bytes written to the standard output*/
	return (wrt);
}
