#include<iostream>
#include<fstream>
using namespace std;
class queue{
	private:
		int *arr;
		int front;
		int rear;
		int size;
		int noe;
	public:
		queue(){
	arr = new int[10];
	rear=-1;
	front=-1;
	size=10;
	noe=0;
}
//	queue(int a){
//	size = a;
//	rear=-1;
//	front=-1;
//	arr = new int[a];
//	noe=0;
//}
bool isEmpty(){
	if(noe==0)
	return true;
	else
	return false;
}
bool isFull(){
	if(noe==size)
	return true;
	else
	return false;
}
bool enque(int a){
	if(!isFull())
	{
		arr[(++front)%size]=a;
		++noe;
		
		return true;
	}
	return false;
}
bool peek(int& a){
	if(!isEmpty())
	{
		a=arr[rear];
		return true;
	}
	return false;
}
int deque(){
	if(!isEmpty())
	{
		--noe;
		return arr[(++rear)%size];
	}
}
void printque()
{
	if(!isEmpty())
	{
		for(int i=rear+1;i<=front;++i)
		{
			cout<<arr[(i)%size]<<endl;
		}
	}
}
int getsize(){
	return noe;
}
};
class stack{
	private:
		queue q1;
		queue q2;
		int point;
	public:
		stack():q1(),q2(){
			point = 1;
		}
		stack(int size):q1(size),q2(size)
		{
			point = 1;
		}
		bool isEmpty(){
			if(point == 1)
			return q1.isEmpty();
			if(point==2)
			return q2.isEmpty();
		}
		bool isFull(){
			if(point == 1)
			return q1.isFull();
			if(point==2)
			return q2.isFull();
		}
		void push(int a)
		{
			if(point == 1)
			{
				if(!q1.isFull())
				q1.enque(a);
			}
			if(point==2)
			{
				if(!q2.isFull())
				q2.enque(a);
			}
		}
		int pop(){
			int i;
			if(point == 1)
			{
				i=q1.getsize();
				for(int j=1;!q1.isEmpty();++j)
				{
						if(j==i)
						{
							point =2;
						    return q1.deque();
						}
						else
						q2.enque(q1.deque());
				}
			}
			else if(point==2)
			{
				i=q2.getsize();
				for(int j=1;!q2.isEmpty();++j)
				{
						if(j==i)
						{
							point =1;
						    return q2.deque();
						}
						else
						q1.enque(q2.deque());
				}
			}
		}
};
int main(){
	stack s1;
	int a;
	for(int i=1;i<11;++i)
	s1.push(i);
	while(!s1.isEmpty())
	{
		a=s1.pop();
		cout<<a<<endl;
	}
}

