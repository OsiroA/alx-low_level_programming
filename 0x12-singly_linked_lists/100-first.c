#include <stdio.h>
/**
 * printer - This function prints a ready-made statement
 * Return: 0 if success
 */
void printer(void) __attribute__((constructor));
void printer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
