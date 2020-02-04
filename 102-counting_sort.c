#include "sort.h"
/**
 * counting_sort - sorts an array of integers in ascending order using the
 * Counting sort algorithm
 * @array: the array to sort
 * @size: the size of the array to sort
 *
 */
void counting_sort(int *array, size_t size)
{
int min, max, *count, *copy;
size_t i;

if (array == NULL || size < 2)
return;
min = array[0];
for (i = 0; i < size; i++)
{
if (array[i] > min)
min = array[i];
}
count = calloc((min + 1), sizeof(int));
for (i = 0; i < size; i++)
{
count[array[i]]++;
}
for (max = 1; max < min; max++)
{
count[max + 1] += count[max];
}
print_array(count, min + 1);
copy = malloc(sizeof(int) * size);
for (i = 0; i < size; i++)
{
count[array[i]]--;
copy[count[array[i]]] = array[i];
}
for (i = 0; i < size; i++)
{
array[i] = copy[i];
}
free(copy);
free(count);
}
