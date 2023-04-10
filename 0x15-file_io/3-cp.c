#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
/**
* main - this fuction copies the text of a file to another file
* @argc: argument counter
* @argv: argument vector
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, checker, writer;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (chmod(argv[2], 0664) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't set file permissions\n");
		exit(99);
	}
	checker = read(file_from, buffer, 1024);
	if (checker == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit (98);
	}
	while (checker)
	{
		writer = write(file_to, buffer, checker);
		if (writer == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
		checker = read(file_from, buffer, 1024);
		if (checker == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
