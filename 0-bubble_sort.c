#include "sort.h"
/**
 * bubble_sort - sort array using bubble sort algorithm
 * @array: int array
 * @size: size_t size of @array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || !size)
		return;
	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int tmp = array[i];

				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}

