#include <stdio.h>
#include "sort.h"
#include <stdbool.h>
void swap(int *x, int *y);

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
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: the array to be printed
 * @size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool swapped = false;

	if (array == NULL || size < 2)
	{
		return;
	}

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < (len - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				swapped = false;
			}
		}
		len--;
	}
}
