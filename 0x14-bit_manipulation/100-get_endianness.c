#include "main.h"
/**
* get_endianness - This function checks the endianess
* Return: 0 if big eendian or 1 if little endian
*/
int get_endianness(void)
{
	int n = 1;
	char *echecker;

	echecker = (char *)&n;
	if (*echecker == 1)
		return (1);
	else
		return (0);
}
