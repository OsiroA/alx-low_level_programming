#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - This function creates an array of integers
 * @min: the smallest integer in tthe array
 * @max: the largest integer in the array
 * Return: NULL or a pointer
 */
int *array_range(int min, int max)
{
	int a, size;
	int *AofI;

	/* Get the size of the array, add one to include the actual deducted */
	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	AofI = malloc(sizeof(int) * size);
	if (AofI == NULL)
		return (NULL);

	/* Arrange in increasing order from min to max */
	for (a = 0; a < size && min <= max; a++, min++)
		AofI[a] = min;
	return (AofI);
}
