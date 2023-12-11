#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*
* FILE_PERMISSIONS - Macro representing file permissions
* (S_IRUSR | S_IWUSR)
*/

#define FILE_PERMISSIONS (S_IRUSR | S_IWUSR)

/**
* create_file - Creates a file and writes content to it.
* @filename: Name of the file to create.
* @text_content: Content to be written to the file.
*
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, FILE_PERMISSIONS);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
	{
		perror("close");
		return (-1);
	}
	return (1);
}
