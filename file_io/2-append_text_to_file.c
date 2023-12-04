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

	/*If filename = NULL - ERROR*/
	if (!filename)
		return (-1);

	/*Open file in write-only, appending to the end, permissions 664*/
	file = open(filename, O_WRONLY | O_APPEND, 0664);

	/*If file opening unsuccessful - ERROR*/
	if (file == -1)
		return (-1);

	/*Checks if text_content is NULL*/
	if (text_content == NULL)
	{
		/*Checks if the file exists*/
		if (access(filename, F_OK) == 0)
		{
			close(file);
			return (1);
		}
		else
			return (-1);
	}

	/*Write the content to the file*/
	wrt = write(file, text_content, strlen(text_content));

	if (wrt == -1)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
