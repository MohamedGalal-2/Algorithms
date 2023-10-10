#include "binarySearch.h"

int binarySearch(int* arr, int start_Index, int end_Index, int key)
{
	while (start_Index <= end_Index)
	{
		int mid = start_Index + ((end_Index - start_Index) / 2);

		if (key == arr[mid])
		{
			return mid;
		}
		else if (key < arr[mid])
		{
			end_Index = mid - 1;
		}
		else if (key > arr[mid])
		{
			start_Index = mid + 1;
		}
	}

	return -1;
}

int recursiveBinarySearch(int* arr, int start_Index, int end_Index, int key)
{
	while (start_Index <= end_Index)
	{
		int mid = start_Index + ((end_Index - start_Index) / 2);

		if (key == arr[mid])
		{
			return mid;
		}
		else if (key < arr[mid])
		{
			return recursiveBinarySearch(arr, start_Index, mid - 1, key);
		}
		else if (key > arr[mid])
		{
			return recursiveBinarySearch(arr, mid + 1, end_Index, key);
		}
	}

	return -1;
}