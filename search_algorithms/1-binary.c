#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @arr: array of integers
 * @left: starting index
 * @right: ending index
 * Return: void
 */
void print_array(int *arr, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", arr[i]);

		if (i < right)
			printf(", ");
	}

	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: array of integers
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the 1st index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	while (left <= right)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}
	return (-1);
}
