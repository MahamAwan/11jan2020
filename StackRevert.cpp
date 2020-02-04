#include<iostream>
using namespace std;
#define SIZE 10;
class stack {
	private:
		int *arr;
		int top;
		int capacity;
	public:
		stack() {
			capacity=SIZE;
			arr= new int[capacity];
			top=-1;
		}
		bool isEmpty() {
			if(top==-1) {
				return true;
			}
			else
			    return false;
		}
		bool isFull() {
			if((top+1)==capacity) {
				return true;
			}
			else
			    return false;
		}
		bool push(int x) {
			if(!isFull()) {
				arr[++top]=x;
				return true;
			}
			else 
				return false;
		}
		bool pop(int& x) {
			if(isEmpty()) {
				return false;
			}
			else {
				x=arr[top--];
				return true;
			}
		}	
};
int main() {
	stack s;
	int x=0;
	while(x!=-1) {
		cin>>x;
		if(x!=-1) {
			s.push(x);
		}
	}
	while(!s.isEmpty()) {
		s.pop(x);
		cout<<x<<endl;
	}
}
