#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

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

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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

	close(fd);
	return (1);
}

