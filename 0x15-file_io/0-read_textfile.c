#include "main.h"
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
	FILE *filepointer;
	ssize_t letterscopied, lettersread;
	char *outputfile;

	if (filename == NULL)
		return (0);

	filepointer = fopen(filename, "r");
	if (filepointer == NULL)
		return (0);

	outputfile = malloc(sizeof(char) * letters);
	if (outputfile == NULL)
	{
		fclose(filepointer);
		return (0);
	}

	lettersread = fread(outputfile, sizeof(char), letters, filepointer);
	if (lettersread == 0)
	{
		free(outputfile);
		fclose(filepointer);
		return (0);
	}
	letterscopied = fwrite(outputfile, sizeof(char), lettersread, stdout);

	if (letterscopied == 0 || lettersread != letterscopied)
	{
		free(outputfile);
		fclose(filepointer);
		return (0);
	}
	free(outputfile);
	fclose(filepointer);

	return (letterscopied);
}
