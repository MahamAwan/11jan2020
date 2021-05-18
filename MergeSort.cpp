#include<iostream>
using namespace std;
void merge(int *arr,int *b,int low, int mid, int high) {
   int l1= low, l2= mid + 1,i;
   for(i = low; l1 <= mid && l2 <= high; i++) {
      if(arr[l1] <= arr[l2])
         b[i] = arr[l1++];
      else
         b[i] = arr[l2++];
   }
   while(l1 <= mid)    
      b[i++] = arr[l1++];

   while(l2 <= high)   
      b[i++] = arr[l2++];

   for(i = low; i <= high; i++)
      arr[i] = b[i];
}

void sort(int *arr,int low, int high) {
	int *b=new int[high];
   if(low < high) {
     int mid= (low + high) / 2;
      sort(arr,low, mid);
      sort(arr,mid+1, high);
      merge(arr,b,low, mid, high);
   }  
}

int main() { 
    int size=10;
	int arr[size];
	for(int i=0;i<size;++i)
	cin>>arr[i];
	
   sort(arr,0, size);
  
  cout<<"After sorting\n";
   for(int i = 0; i < size; i++)
     cout<<arr[i]<<endl;
}

