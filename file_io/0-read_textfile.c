#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes, r, w;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);

	r = read(filedes, buf, letters);
	if (r == -1)
	{
		close(filedes);
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		close(filedes);
		free(buf);
		return (0);
	}
	free(buf);
	close(filedes);
	return (r);
}
