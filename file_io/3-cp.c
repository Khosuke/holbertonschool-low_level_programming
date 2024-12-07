#include "main.h"

/**
 * copyfile - copy a file
 * @file_from: name of the file to copy
 * @file_to: name of the copy destination
 *
 * Return: 0 on success
 */
int copyfile(char *file_from, char *file_to)
{
	ssize_t read_from, w_to;
	int fd_from, fd_to, cls_file;
	char *buf[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((read_from = read(fd_from, buf, 1024)) > 0)
	{
		w_to = write(fd_to, buf, read_from);
		if (w_to == -1 || read_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	cls_file = close(fd_from);
	if (cls_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
		exit(100);
	}
	cls_file = close(fd_to);
	if (cls_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
		exit(100);
	}
	return (0);
}


/**
 * main - copy a file
 * @argc:  number of argument has to be 3
 * @argv: source file and destination file
 *
 * Return: 0 on success of copy
 */
int main(int argc, char **argv)
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = copyfile(argv[1], argv[2]);
	return (res);
}
