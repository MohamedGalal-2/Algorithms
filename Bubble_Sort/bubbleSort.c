#include "bubbleSort.h"

static void swapTwoNumbers(int* numberOne, int* numberTwo)
{
	int temp = *numberOne;
	*numberOne = *numberTwo;
	*numberTwo = temp;
}

void bubbleSort(int* array, int arraySize)
{
	unsigned char isSorted = 0;
	for (int i = 0; i < (arraySize - 1); i++)
	{
		for (int j = 0; j < (arraySize - i - 1); j++)
		{
			int* leftElement = &array[j]; // pointer to the left element
			int* rightElement = &array[j + 1]; // pointer to the right element

			if (*leftElement > *rightElement)
			{
				swapTwoNumbers(*(&leftElement), *(&rightElement)); // swap the two elements
				isSorted = 1;
			}
			printArray(array, arraySize);
		}
		if (0 == isSorted)
		{
			return;
		}
	}
}