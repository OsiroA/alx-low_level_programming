#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
* create_file - This function creates a file
* @filename: this is the name of the  file to be created
* @text_content: The null terminated string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int filepointer, len;
	ssize_t letters;

	if (filename == NULL)
		return (-1);
	filepointer = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filepointer == -1)
		return (-1);
	if (!text_content)
	{
		close(filepointer);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;
	letters = write(filepointer, text_content, len);
	if (letters == -1)
	{
		/*write(1, "fails", 6);*/
		close(filepointer);
		return (-1);
	}
	close(filepointer);
	return (1);
}
