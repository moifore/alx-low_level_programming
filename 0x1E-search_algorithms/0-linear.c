#include "search_algos.h"

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
	if (array == NULL)
	{
		return (-1);
	}

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array [%d] = [%d]\n", value, array[i]);
		if (array[i] == value)
		{
			return (int i);
		}
	}
	return (-1);
}
