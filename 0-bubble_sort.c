#include "sort.h"

/**
 * bubble_sort - This function sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: the size of the array
 *
 * Return: The address of the first element of the array.
 */

void bubble_sort(int *array, size_t size)
{

	size_t i = 0, j = 0;

	/* Checking if the size of the array is less than 2. */
	if (size < 2)
		return;
	/* This is the first loop that will iterate through the array. */
	for (i = 0; i < size - 1; i++)
	{

		/* This is the second loop that will iterate through the array. */
		for (j = 0; j < size - i - 1; j++)
		{
			/* This is comparing the value of the current element with the next element. */
			if (array[j] > array[j + 1])
			{
				/* Switching the values of the array and printing the array. */
				switch_a(&array[j], &array[j + 1]);
				print_array(array, size);
			}
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
