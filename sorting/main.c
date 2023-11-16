#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int arr[] = {32, 2, 128, 8, 16, 64, 4};
	int len = 0;
	int p = 0;

	while (arr[len] != '\0')
	{
		len++;
	}


//! this is the bubble sort mechanism
	// for (int i = 0; i < len-1; i++)
	// {
	// 	for (int j = 0; j < len-1-i; j++)
	// 	{
	// 		if (arr[j] > arr[j+1])
	// 		{
	// 			int temp = arr[j+1];
	// 			arr[j+1] = arr[j];
	// 			arr[j] = temp;
	// 		}
	// 	}
	// }


//! this is the insertion sorting algorithm
	// for (int i = 1; i <= len-1; i++)
	// {
	// 	int temp = arr[i];
	// 	int j = i-1;
	// 	for (;j >= 0 && temp < arr[j]; j--)
	// 	{
	// 		arr[j+1] = arr[j];
	// 	}
	// 	arr[j+1] = temp;
	// }


//! this is the slection algorithm

// for (int i = 0; i < len-1; i++)
// {
// 	int min = i;

// 	for (int j = i+1; j < len; j++)
// 	{
// 		if(arr[j] < arr[min])
// 		{
// 			int temp = arr[j];
// 			arr[j] = arr[min];
// 			arr[min] = temp;
// 		}
// 	}
// }



//! this is the printing algorithm
	for (p; p < len; p++)
	{
		printf("{%d}", arr[p]);
	}
	printf("\n");
}
