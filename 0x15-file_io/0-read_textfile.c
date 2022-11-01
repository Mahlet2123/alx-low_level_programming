#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	wr = write(1, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (wr);
}
