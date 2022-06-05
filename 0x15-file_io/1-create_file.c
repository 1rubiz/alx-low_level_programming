#include "main.h"

/**
 * create_file - it creates a file
 * @filename: filename parameter
 * @text_content: content parameter
 *
 * Return: 1 if successsful and -1 if not.
 */


int create_file(const char *filename, char *text_content)
{
	int fd, numletters, wr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (numletters = 0; text_content[numletters]; numletters++)
		;

	wr = write(fd, text_content, numletters);

	if (wr == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
