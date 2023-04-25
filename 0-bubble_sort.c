#include "sort.h"

/**
 * bubble_sort - Sorts an array of intengers in ascending order
 *		 prints array after each time you swap two elements.
 *
 * @array: Array to swap.
 * @size: size of the array.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
