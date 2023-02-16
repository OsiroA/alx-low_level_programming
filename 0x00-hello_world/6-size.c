#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{

	char c;
	int i;
	long int l;
	long long int v;
	float f;

	printf("The size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of a long long int is: %lu byte(s)\n", 
			(unsigned long)sizeof(v));
	printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
