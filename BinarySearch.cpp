#include<iostream>
using namespace std;
bool binaryfind(int v, int* arr, int size) {
	int l, u;
	l = 0;
	u = size - 1;
	while (l <= u) {
		int m = (l + u) / 2;
		if (arr[m] == v) {
			return true;
		}
		if (v > arr[m]) {
			l = m + 1;
		}
		if (v < arr[m]) {
			u = m - 1;
		}
	}
	return false;
}
int main() {
	int size=10;
	int arr[size];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	int v;
	cout << "Enter num for check" << endl;
	cin >> v;
	if (binaryfind(v, arr, 10)) {
		cout << "exist" << endl;
	}
	else {
		cout << "Do not exist" << endl;
	}
	return 0;
}
