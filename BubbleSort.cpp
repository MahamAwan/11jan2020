#include<iostream>
//#include"stdafx.h"
using namespace std;
void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void bubbleSort(int arr[], int size){
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j <size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void printArray(int arr[], int size)
	{
		for (int i = 0; i < size; i++)
			printf("%d ", arr[i]);
		//printf("n");
	}
int main()
{
//	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//	int n = sizeof(arr) / sizeof(arr[0]);
    int size=10;
	int arr[size];
	arr[0]=3;
	arr[1]=5;
	arr[2]=8;
	arr[3]=1;
	arr[4]=9;
	arr[5]=7;
	arr[6]=2;
	arr[7]=4;
	arr[8]=6;
	arr[9]=10;
	for(int i=0;i<10;++i)
	cout<<arr[i]<<endl;
	bubbleSort(arr, size);
	printf("Sorted array: \n");
	printArray(arr, size);
//  for(int i=0;i<10;++i)
//	cout<<arr[i]<<endl;
	return 0;
}
