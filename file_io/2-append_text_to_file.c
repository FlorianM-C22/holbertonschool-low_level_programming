#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file to be printed
 * @text_content: File's content
 * Return: 1 = SUCESS
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file, wrt;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0664);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (access(filename, F_OK) == 0)
		{
			close(file);
			return (1);
		}
		else
			return (-1);
	}

	wrt = write(file, filename, strlen(text_content));

	if (wrt == -1)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
