#include <iostream>
#include <algorithm>


using namespace std;
#define LENGTH 10001

int a[LENGTH];
int n, stack_size, input;
string s;

void push(int input) {
	if (stack_size < LENGTH - 1) {
		a[stack_size] = input;
		stack_size++;
	}
}

int pop() {
	if (!stack_size)
		return -1;
	else
	{
		int ret = a[stack_size - 1];
		stack_size--;
		return ret;
	}
}

int size() {
	return stack_size;
}

int empty() {
	if (!stack_size) 
		return 1;
	else
		return 0;
}

int top() {
	if (!stack_size)
		return -1;
	else
		return a[stack_size - 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	while (n--) {
		cin >> s;

		if (s == "push") {
			cin >> input;
			push(input);
		}
		if (s == "pop") {
			cout << pop() << "\n";
		}
		if (s == "size") {
			cout << size() << "\n";
		}
		if (s == "empty") {
			cout << empty() << "\n";
		}
		if (s == "top") {
			cout << top() << "\n";
 		}
	}

	return 0;
}	