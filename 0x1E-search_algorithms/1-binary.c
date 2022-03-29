#include "search_algos.h"

/**
  * binary_search - to search for a value in array
  * @array: pointer to first element for searching.
  * @size: number of elements in array.
  * @value: value to search.
  *
  * Return: If no file is present or given array is NULL -1.
  *
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
