#include "sort.h"
/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: int array
 * @size: size_t size of @array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[i])
			{
				int tmp = array[j];

				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}

