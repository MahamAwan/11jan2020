#include<iostream>
using namespace std;
void bubblesort(int *arr,int size)
{
	int temp,nos=1;
	while(nos>0)
	{
		nos=0;--size;
		for(int j=0;j<size;++j)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				++nos;
			}
		}
	}
}
int main(){
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
	bubblesort(arr,size);
	for(int i=0;i<10;++i)
	cout<<arr[i]<<endl;
}
