#include "insertionSort.h"

void printArray(int* array, int arraySize);

int main()
{
	int array[] = { 5, 2, 4, 6, 1, 3, 3 };
	int arraySize = sizeof(array) / sizeof(array[0]);
	printf("Unsorted Array: ");
	printArray(array, arraySize);
	insertionSort(array, arraySize);
	printf("Sorted Array: ");
	printArray(array, arraySize);

	return 0;
}

void printArray(int* array, int arraySize)
{
	int i;
	printf("[");
	for (i = 0; i < arraySize; i++)
	{
		if (i != arraySize - 1)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d", array[i]);
		}
	}
	printf("]\n");
}