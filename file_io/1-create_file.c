#include "main.h"

/**
 * create_file - creates a file with a text content inside
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t w;
	int fd, lentxt = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[lentxt])
		lentxt++;
	w = write(fd, text_content, lentxt);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
