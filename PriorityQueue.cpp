#include<iostream>
using namespace std;

void bubblesort(int *arr,int size)
{
	int temp,start=1;
	while(start>0)
	{
		start=0;--size;
		for(int j=0;j<size;++j)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				++start;
			}
		}
	}
}
class priqueue{
	private:
		int *arr;
		int size;
		int noe;
		int front;
	public:
		priqueue(int a=10){
			arr=new int[a];
			size=a;
			noe=0;
			front =-1;
		}
		bool isEmpty()
		{
			if(noe==0)
			return true;
			else
			return false;
		}
		bool isFull()
		{
			if(noe==size)
			return true;
			else 
			return false;
		}
		int getsize()
		{
			return size;
		}
		void enque(int a){
			if(!isFull()){
			arr[noe++]=a;
			bubblesort(arr,noe);
		}
		}
		int deque(){
			if(!isEmpty())
			{
				return arr[++front%size];
			}
		}
		int peek(){
			if(!isEmpty())
			{
				return arr[noe-1];
			}
		}
};
int main(){
	priqueue pq;
	pq.enque(7);
	pq.enque(2);
	pq.enque(4);
	pq.enque(6);
	pq.enque(3);
	pq.enque(9);
	pq.enque(5);
	pq.enque(1);
	for(int i=0;i<8;i++)
	cout<<pq.deque()<<endl;
}
