#include <stdio.h>
/* This program prints all possible different combination of two digits */
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main()
{
	for (int i = 0; i <= 8; i++)
       	{
		for (int j = i + 1; j <= 9; j++)
		{
			printf("%d, %d\n", i, j);
		}
       	}

return 0;
}

/**This program uses two nested for loops to iterate through 
 * all possible combinations of two digits.
 * The outer loop iterates through all digits from 0 to 8,
 * and the inner loop iterates through all digits
 * from the current digit plus 1 to 9. This ensures that the two digits are always different.
 * Inside the inner loop, the program uses printf to print
 * the two digits separated by a comma and a space.
 * When you run this program, it will output all possible combinations of two digits,
 */
