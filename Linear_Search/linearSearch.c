#include "linearSearch.h"

int oneWayLinearSearch(int* arr, int size, int key)
{
	int left = 0;

	for (left = 0; left < size; left++)
	{
		if (key == arr[left])
		{
			return left;
		}
	}

	return -1;
}

int twoWayLinearSearch(int* arr, int size, int key)
{
	int left = 0;
	int right = key - 1;

	for (left = 0; left < size; left++)
	{
		if (key == arr[left])
		{
			return left;
		}
		else if (key == arr[right])
		{
			return right;
		}
		right--;
	}

	return -1;
}