#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fi, wr, len = 0;

	if (!filename)
		return (-1);

	fi = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0060);
	if (fi == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	wr = write(fi, text_content, len);
	if (wr == -1)
	{
		close(fi);
		return (-1);
	}

	close(fi);
	return (1);
}
