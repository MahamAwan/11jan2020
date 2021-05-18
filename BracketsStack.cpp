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
int top;
	void check(char str[],int n,char stack[]) {
	    for(int i = 0; i < n; i++) {
		if(str[i] == '(') {
			top=top+1;
			//stack[top] = '(';
		}
		if(str[i] == ')' && stack[top]=='('){
			top=top-1;
		}
		if(top==-1) {
			cout << "blanced!" << endl;
		}
		else {
			cout << "unbalanced!" << endl;
		}
	} 
	}
int main() {
		char str[] = {'(','}'};
	    char stack[10];
	    //top==1;
	    check(str,1,stack);
	    return 0;
}
