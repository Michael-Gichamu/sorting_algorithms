#include "sort.h"
void quicksort_recursion(int array[], int low, int high, size_t size);
void swap(int *array, int x, int y);
int partition(int *array, int low, int high, size_t size);

/**
 * quick_sort - sorts an array of integers in ascending order,
 *		using the Quick sort algorithm.
 * @array: array to swap.
 * @size: size of the array.
 *
 * Return: Always(nothing).
 */
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}

/**
 * quicksort_recursion - Divide and conquer.
 * @array: The array.
 * @low: Lowest index.
 * @high: Highest index.
 *
 * Return: Always(void).
 */
void quicksort_recursion(int array[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high, size);
		quicksort_recursion(array, low, pivot_index - 1, size);
		quicksort_recursion(array, pivot_index + 1, high, size);
	}
}

/**
 * partition - Lomuto partitioning scheme.
 * @array: array to partition.
 * @low: Lowest index.
 * @high: Highest index.
 *
 * Return: Always(int)
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high];
	int j, i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(array, i, j);
			i++;
			print_array(array, size);
		}
	}
	swap(array, i, high);
	print_array(array, size);

	return i;
}

/**
 * swap - swap two items.
 * @array - The array.
 * @x: first element.
 * @y: second element.
 *
 * Return: void.
 */
void swap(int *array, int x, int y)
{
	int temp = array[x];
	array[x] = array[y];
	array[y] = temp;
}
