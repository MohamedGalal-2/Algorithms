#include "selectionSort.h"

static void swapTwoNumbers(int* numberOne, int* numberTwo)
{
	int temp = *numberOne;
	*numberOne = *numberTwo;
	*numberTwo = temp;
}

void selectionSort(int* array, int arraySize)
{
	int minIndex = 0;
	int isSorted = 0; // flag to check if the array is sorted

	for (int i = 0; i < (arraySize - 1); i++)
	{
		minIndex = i; // set the index of the minimum element to the current index

		for (int j = (i + 1); j < arraySize; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j; // update the index of the minimum element
				isSorted = 1;
			}
			else
			{
				// Do nothing
			}
		}
		swapTwoNumbers(&array[i], &array[minIndex]); // swap the two elements

		if (0 == isSorted) // if the array is sorted, then break the loop
		{
			return;
		}
	}
}

