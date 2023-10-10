#include "selectionSort.h"

void printArray(int* array, int arraySize);

int main()
{
	int array[] = { 1413413, 1023, 5, 2, 4, 6, 1, 3, 3 , 10, 15, 100, 100000 };
	int arraySize = sizeof(array) / sizeof(array[0]);
	printf("Unsorted Array: ");
	printArray(array, arraySize);
	selectionSort(array, arraySize);
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