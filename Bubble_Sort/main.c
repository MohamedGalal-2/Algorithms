#include "bubbleSort.h"

void printArray(int* array, int arraySize);

int main()
{
	int array[] = { 5, 8, 4, 2, 1 };
	int array1[] = { 1, 2, 4, 5, 8 };
	int arraySize = sizeof(array) / sizeof(array[0]);
	int arraySize1 = sizeof(array1) / sizeof(array1[0]);

	printf("Unsorted array before: ");
	printArray(array, arraySize);
	bubbleSort(array, arraySize);
	printf("Unsorted array after: ");
	printArray(array, arraySize);

	printf("----------------------------------------\n");
	printf("Sorted array before: ");
	printArray(array1, arraySize1);
	bubbleSort(array1, arraySize1);
	printf("Sorted array after: ");
	printArray(array1, arraySize1);

	return 0;
}

void printArray(int* array, int arraySize)
{
	printf("[");
	for (int i = 0; i < arraySize; i++)
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