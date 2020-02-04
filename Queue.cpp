#include<iostream>
using namespace std;
#define SIZE 10;
class queue {
	private:
		int *arr;
		int front;
		int rear;
		int capacity;//size
		int noe;
	public:
		queue(int size) {
		arr = new int[capacity];
		front = -1;
		rear = -1;
		noe = 0;
		}
	bool isFull() {
		if(noe==capacity) {
			return true;
		}
		else
		return false;
	}
	bool isEmpty() {
		if(noe==0) {
			return true;
		}
		else
		return false;
	}
	void enque(int x) {
		if(!isFull()) {
			noe++;
			arr[(++front)%capacity]=x;
		}
	}
	int deque() {
		if(!isEmpty()) {
			noe--;
			arr[(++rear)%capacity];
		}
	}
	void print() {
		for(int i=(rear+1);i<front;i++) {
			cout << arr[i%capacity];
		}
	}
};
int main() {
	queue q(8);
	q.enque(1);
	q.enque(2);
	q.enque(3);
	q.enque(4);
	q.enque(5);
	q.enque(6);
	q.enque(7);
	q.enque(8);
	q.print();
	q.deque();
	q.deque();
	q.deque();
	cout << endl;
	q.print();
	q.enque(2);
	q.enque(3);
	q.deque();
	cout << endl;
	q.print();
	q.enque(1);
	cout << endl;
	q.print();
}
