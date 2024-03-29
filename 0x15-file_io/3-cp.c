#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
* copy_file - Copies the contents of one file to another.
* @file_from: The source file.
* @file_to: The destination file.
* Return: 0 on success, -1 on failure.
*/
int copy_file(int file_from, int file_to)
{
	int checker, writer;
	char buffer[1024];

	while ((checker = read(file_from, buffer, 1024)) > 0)
	{
		writer = write(file_to, buffer, checker);
		if (writer == -1)
		{
			return (-1);
		}
	}
	if (checker == -1)
	{
		return (-1);
	}
	return (0);
}

/**
* main - this fuction copies the text of a file to another file
* @argc: argument counter
* @argv: argument vector
* Return: 0 or error code
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		return (99);
	}
	if (copy_file(file_from, file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		close(file_to);
		return (99);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100);
	}
	return (0);
}
