#include <stdio.h>

int swaps = 0;

void bubbleSort(int* arr, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swaps++;
			}
		}
	}
}

int main(void)
{
	int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
	int length = 9;
	
	bubbleSort(arr, length);
	
	printf("%d swaps\n", swaps);
	
	return 0;
}
