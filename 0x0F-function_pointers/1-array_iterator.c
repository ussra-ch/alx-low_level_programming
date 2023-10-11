#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given a
 *  a parameter on each element of an array
 *  @array: the array
 *  @size: the size of the array
 *  @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
