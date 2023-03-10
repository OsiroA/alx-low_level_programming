#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument counter
 * @argv: argument vector
 * Return: coins, 1, 0, or Error
 */
int main(int argc, char *argv[])
{
	int change;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	coins = 0;
	if (change >= 25)
	{
		while (change >= 25)
			change -= 25, coins++;
	}
	if (change < 25 && change >= 10)
	{
		while (change >= 10)
			change -= 10, coins++;
	}
	if (change < 10 && change >= 5)
	{
		while (change >= 5)
			change -= 5, coins++;
	}
	if (change < 5 && change >= 2)
	{
		while (change >= 2)
			change -= 2, coins++;
	}
	if (change == 1 || change == 2 || change == 5 || change == 10 || change == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
