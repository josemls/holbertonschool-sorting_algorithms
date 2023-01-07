#include "sort.h"
/**
 * selection_sort - sort array by slection
 *
 * @array: Array to organize
 * @size: Size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	bool sort = false;

	/* Iterating through the array. */
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		sort = false;
		/* Iterating through the array to find the minimum value. */
		for (j = i + 1; j < size; j++)
		{
			/* Finding the minimum value in the array. */
			if (array[j] < array[min])
			{
				min = j;
				sort = true;
			}
		}
		/* This is checking if the array is sorted. If it is not sorted, 
		it will switch the values and print the array. */
		if (sort)
		{
		switch_a(&array[min], &array[i]);
		print_array(array, size);
		}
	}
}
/**
 * switch_a - switch array elemtnts
 *
 * @p_a: pointer to first position
 * @p_b: pointer to second position
 *
 */
/* Switching the values of the array. */
void switch_a(int *p_a, int *p_b)
{
	int temp;

	temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
}
