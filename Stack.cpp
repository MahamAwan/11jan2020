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
			if(top+1==capacity) {
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
		bool pop(int&x) {
			if(isEmpty()) {
				arr[top--];
				return false;
			}
			else
			return true;
		}	
};
int main() {
	stack s;
	if(s.push(1)) {
		cout<<"sucessful push"<<endl;
	}
	s.push(2); {
		cout<<"sucessful push"<<endl;
	}
	s.push(3); {
		cout<<"sucessful push"<<endl;
	}
	int x;
	if(s.pop(x)) {
		cout<<"pop sucessfull"<<endl;
	}
	if(s.pop(x)) {
		cout<<"pop sucessfull"<<endl;
	}
	else {
		cout<<"error"<<endl;
	}
}
