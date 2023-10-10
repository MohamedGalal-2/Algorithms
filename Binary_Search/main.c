#include "binarySearch.h"

int main(void)
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 15;
	int index = binarySearch(arr, 0, size - 1, key);
	int recursiveIndex = recursiveBinarySearch(arr, 0, size - 1, key);

	printf("Normal binary search: ");
	if (index == -1)
	{
		printf("Key not found!\n");
	}
	else
	{
		printf("Key found at index %d\n", index);
	}

	printf("Recursive binary search:");

	if (recursiveIndex == -1)
	{
		printf("Key not found!\n");
	}
	else
	{
		printf("Key found at index %d\n", recursiveIndex);
	}

	return EXIT_SUCCESS;
}