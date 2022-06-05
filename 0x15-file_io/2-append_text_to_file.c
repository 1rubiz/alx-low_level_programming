#include "main.h"

/**
 * append_text_to_file - appends the text content to the end of
 * the the specified file.
 * @filename: file name parameter
 * @text_content: text to append parameter
 *
 * Return: 1 if successful or -1 if not.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, numletters, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;
		wr = write(fd, text_content, numletters);

		if (wr == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
