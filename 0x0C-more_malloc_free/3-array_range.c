#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @max: highest amount of value
 * @min: lowest amount of value
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *ptr, len, item;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (item = 0; min <= max; item++)
		ptr[item] = min++;
	return (ptr);
}
