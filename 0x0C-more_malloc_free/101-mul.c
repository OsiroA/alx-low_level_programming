#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 or NULL
 */
int main(void)
{
	int mul, argc = 0, num1 = 0, num2 = 0;

	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}
	if (((num1 >= 'a') && (num1 <= 'z')) || ((num2 >= 'a' && num2 <= 'z')))
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
