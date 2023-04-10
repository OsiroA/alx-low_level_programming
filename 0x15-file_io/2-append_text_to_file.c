#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
* append_text_to_file - This function appends text at the end of a file
* @filename: The name of the file
* @text_content: the string to be appended to the end of the file
* Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int filepointer, len = 0, letters;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		filepointer = open(filename, O_WRONLY | O_APPEND, 0600);
		if (filepointer == -1)
		{
			return (-1);
		}
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
		letters = write(filepointer, text_content, len);
		if (letters == -1)
		{
			close(filepointer);
			return (-1);
		}
	}
	close(filepointer);
	return (1);
}
