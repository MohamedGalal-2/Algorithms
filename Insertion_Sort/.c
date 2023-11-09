#include "insertionSort.h"

void insertionSort(int* array, int arraySize)
{
	int key = 0;
	int swappingIndex = 0;

	for (int i = 1; i < arraySize; i++)
	{
		key = array[i];
		swappingIndex = (i - 1);

		while ((key < array[swappingIndex]) && (swappingIndex >= 0))
		{
			array[swappingIndex + 1] = array[swappingIndex];
			swappingIndex--;
		}

		array[swappingIndex + 1] = key;
	}
}