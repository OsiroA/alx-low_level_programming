#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi converts a string to an integer */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
