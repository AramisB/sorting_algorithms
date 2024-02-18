#include "sort.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * swap - swaps x and y
 * @x: first element
 * @y: second element
 *
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * selection_sort -a function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: array containing the integers
 * @size: size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
