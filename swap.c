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
