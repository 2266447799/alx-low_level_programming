#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terinated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fi;
	int nletters;
	int wr;

	if (!filename)
		return (-1);

	fi = open(filename, O_WRONLY | O_APPEND);

	if (fi == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		wr = write(fi, text_content, nletters);

		if (wr == -1)
			return (-1);
	}
	close(fi);

	return (1);
}
