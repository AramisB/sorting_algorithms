#include <stdio.h>
#include "sort.h"
void swap(int *x, int *y);

/**
 * bubble_sort - a function that sorts an array of integers 
 * in ascending order using the Bubble sort algorithm
 *
 * @array: the array to be printed
 * @size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	for (i = 0; i < (size - 1); i++)
	{
		swapped = 0;

		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap (&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
			break;
	}
}

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
