#include "sort.h"
/**
 * partition - This function takes last element as pivot, places
 * the pivot element at its correct position in sorted
 * array, and places all smaller (smaller than pivot)
 * to left of pivot and all greater elements to right
 * of pivot
 * @array: array to sort
 * @lo: Index of smaller element
 * @hi: Index of highest element
 * @size: size of the array
 *
 * Return: index of the partition
 */
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
ssize_t i, j;
int pivot;


}



/**
 * quick_sort - sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort(array, 0, size - 1, size);
}
