#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program generates random valid passwords
 * Return: 0
 */
int main(void)
{
	int pass[100];
	int o;
	int add;
	int j;

	add = 0;

	srand(time(NULL));

	for (o = 0; o < 100; o++)
	{
		pass[o] = rand() % 78;
		add += (pass[o] + '0');
		putchar(pass[o] + '0');
		if ((2772 - add) - '0' < 78)
		{
			j = 2772 - add - '0';
			add += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
