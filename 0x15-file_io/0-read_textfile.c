#include "main.h"

/**
 * read_textfile - it reads a text file to th specified
 * number and prints it.
 * @filename: file name parameter
 * @letters: specified number of characters to read.
 *
 * Return: the number of letters printed.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buff;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * (letters));

	if (!buff)
	{
		return (0);
	}
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(fd);

	free(buff);
	return (wr);
}
