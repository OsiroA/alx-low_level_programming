#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
/**
* read_textfile - This function reads a text file and prints it to the
* POSIX standard output
* @filename: a pointer to the file to be read
* @letters: the number of characters to be read
* Return: 0 or actual number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filepointer, lettersread;
	ssize_t letterscopied;
	char *outputfile;

	if (filename == NULL)
		return (0);

	filepointer = open(filename, O_RDONLY);
	if (filepointer == -1)
		return (0);

	outputfile = malloc(sizeof(char) * letters);
	if (outputfile == NULL)
	{
		close(filepointer);
		return (0);
	}

	lettersread = read(filepointer, outputfile, letters);
	if (lettersread == -1)
	{
		free(outputfile);
		close(filepointer);
		return (0);
	}
	/* outputfile[lettersread] = '\0';*/
	letterscopied = write(STDOUT_FILENO, outputfile, lettersread);

	if (letterscopied == -1 || lettersread != letterscopied)
	{
		free(outputfile);
		close(filepointer);
		return (0);
	}
	free(outputfile);
	close(filepointer);

	return (letterscopied);
}
