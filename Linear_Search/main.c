#include "linearSearch.h"

int main(void)
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 20;
	int onewayIndex = oneWayLinearSearch(arr, size, key);
	int twowayIndex = twoWayLinearSearch(arr, size, key);

	printf("One way linear search: ");
	if (onewayIndex == -1)
	{
		printf("Key not found!\n");
	}
	else
	{
		printf("Key found at index %d\n", onewayIndex);
	}

	printf("Two way linear search: ");
	if (twowayIndex == -1)
	{
		printf("Key not found!\n");
	}
	else
	{
		printf("Key found at index %d\n", twowayIndex);
	}

	return EXIT_SUCCESS;
}