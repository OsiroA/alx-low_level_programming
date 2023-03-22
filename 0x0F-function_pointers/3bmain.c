#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main- Entry point
 * Description: this program references 4 arguments
 * defined in 3-op_functions.c without callig them directly.
 * it has  3 exit statuses
 * 98 - if the arguments are not 4
 * 99 - if op is null
 * 100- if div or mod gives an answer 0
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}
