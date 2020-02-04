#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 *
 *
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, jmin;
int swap;

if (size < 2)
return;
for (i = 0; i < size - 1; i++)
{
jmin = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[jmin])
jmin = j;
}
if (i != jmin)
{
swap = array[i];
array[i] = array[jmin];
array[jmin] = swap;
print_array(array, size);
}
}
}
