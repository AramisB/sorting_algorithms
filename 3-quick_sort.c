#include "sort.h"
#include <stdio.h>
void swap(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);

/**
 * swap - swaps a and b
 * @a: first integer
 * @b: second integer
 *
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - chose the partition element
 *
 * @array: array of integers
 * @left: starting index of the subset to sort
 * @right:ending index of the subset to sort
 * @size: size of the array
 *
 * Return: final parttion index
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int pivot, j, i = left;

	pivot = array[right];
	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			swap(&array[i], &array[j]);
			if (i != j)
			{
				print_array(array, size);
			}
			i++;
		}
	}
	swap(&array[i], &array[right]);
	if (i != right)
	{
		print_array(array, size);
	}
	return (i);
}
/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition to order.
 * @right: The ending index of the array partition to order.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int pi;

	if (left < right)
	{
		pi = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, pi - 1);
		lomuto_sort(array, size, pi + 1, right);
	}
}
/**
 * quick_sort - Sort an array of integers in ascending
 * order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}
