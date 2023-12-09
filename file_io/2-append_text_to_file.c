#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: Text to append to the file.
*
* Return: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		perror("write");
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
