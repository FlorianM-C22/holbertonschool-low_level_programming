#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: Name of the file to be printed
 * @text_content: File's content
 * Return: 1 = SUCESS
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t file;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = creat(filename, 600);

	if (file == -1)
		return (-1);

	write(file, text_content, strlen(text_content));

	return (1);
}
