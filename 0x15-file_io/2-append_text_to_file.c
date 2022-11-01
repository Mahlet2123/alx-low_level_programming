#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	rd = open(text_content, O_RDONLY);
	if (rd == -1)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	close(fd);
	return (1);
}
