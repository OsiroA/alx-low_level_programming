#include "main.h"
#include <stdio.h>
/**
 * print_buffer - This function prints a buffer
 * @b: the buffer to be printed
 * @size: an integer representing the number of bytes that will
 * be printed from the buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int memorysize, index;

	for (memorysize = 0; memorysize < size; memorysize++)
	{
		printf("%08x: ", memorysize);

		for (index = 0; index < 10; index++)
		{
			if ((index + memorysize) >= size)
				printf(" ");
			else
				printf("%02x", *(b + index + memorysize));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}


		for (index = 0; index < 10; index++)
		{
			if ((index + memorysize) >= size)
				break;

			else if (*(b + index + memorysize) >= 31 &&
					*(b + index + memorysize) <= 126)
				printf("%c", *(b + index + memorysize));
			else
			printf(".");
		}

		if (memorysize >= size)
		continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
