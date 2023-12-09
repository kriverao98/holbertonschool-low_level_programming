#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - Read a text file and print it to the POSIX standard output.
*
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: Actual number of letters read and printed, or 0 on failure.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openFile, readFile, writeFile;
	char *bytesRead;

	if (filename == NULL)
		return (0);

	bytesRead = malloc(sizeof(char) * letters);
	if (bytesRead == NULL)
		return (0);

	openFile = open(filename, O_RDONLY);
	if (openFile == -1)
	{
		free(bytesRead);
		return (0);
	}

	readFile = read(openFile, bytesRead, letters);
	if (readFile == -1)
	{
		free(bytesRead);
		close(openFile);
		return (0);
	}

	writeFile = write(STDOUT_FILENO, bytesRead, readFile);
	if (writeFile == -1)
	{
		free(bytesRead);
		close(openFile);
		return (0);
	}

	free(bytesRead);
	close(openFile);

	return (writeFile);
}
