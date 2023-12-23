#include "sort.h"
/**
 * bubble_sort - sort the array elements from min to max
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j, tmp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if ((j + 1) < size && array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
}
