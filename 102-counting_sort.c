#include "sort.h"
/**
 * counting_sort - sorts an array of integers in ascending
 * order using the Counting sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void counting_sort(int *array, size_t size)
{
int new, j, *count, *copy;
size_t i;

if (array == NULL || size < 2)
return;
new = array[0];
for (i = 0; i < size; new++)
{
if (array[i] > new)
new = array[i];
}
count = calloc((new + 1), sizeof(int));
for (i = 0; i < size; i++)
{
count[array[i]]++;
}
for (j = 1; j < new; j++)
{
count[j + 1] += count[j];
}
print_array(count, new + 1);
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
