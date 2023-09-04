#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi;
	ssize_t re, wr;
	char *buffer = malloc(letters);

	if (!filename || !buffer)
		return (0);

	fi = open(filename, O_RDONLY);
	if (fi == -1)
		return (0);

	re = read(fi, buffer, letters);
	if (re == -1)
		return (0);
	{
		close(fi);
		free(buffer);
		return (0);
	}

	buffer[letters] = '\0';

	wr = write(STDOUT_FILENO, buffer, re);
	if (wr == -1)
	{
		close(fi);
		free(buffer);
		return (0);
	}

	close(fi);
	free(buffer);
	return (wr);
}
