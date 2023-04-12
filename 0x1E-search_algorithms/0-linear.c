#include "search_alogs.h"

/**
 * linear_search - searches for a value in an array
 * of integers using linear search.
 * @array: Pointer to the first element in the search array
 * @size: The number of elements in the array
 * @value: Value to query
 *
 * Return: If the value is not present or the arrary is NULL, -1
 * Otherwise point to the first index in array
 *
 * Description: Prinst a value every time it is compared in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-l);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%1d] = [%d]\n", i, array[i]);
		if (arrary[i] == value)
			return (i);
	}
	return (-1);
}
