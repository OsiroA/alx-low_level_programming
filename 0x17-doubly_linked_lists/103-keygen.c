#include "lists.h"
#include <stdio.h>
#include <string.h>

void generate_key(const char* username, char* key)
{
	int length = strlen(username);
	int i;

	for (i = 0; i < length; i++)
	{
		key[i] = username[length - i - 1];
	}
	key[length] = '\0';
}

int main(int argc, char* argv[])
{
	char* username = argv[1];
	char key[100];

	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}

	generate_key(username, key);

	printf("Key for %s: %s\n", username, key);

	return (0);
}
