#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main file
 * @argc: number of lines arguments
 * @argv: array of elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*ptr)(int, int);

	ptr = get_op_func(argv[2]);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
