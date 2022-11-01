#include <iostream>
#include <queue>
#include <string>
using namespace std;
#define MAX 10000

int dq[MAX * 2 + 1];
int frontIdx = MAX, backIdx = MAX;
int n;
string s;
bool empty() {
	if (frontIdx == backIdx) 
		return 1;
	else
		return 0;
}

void push_front(int value) {
	dq[--frontIdx] = value;
}

void push_back(int value) {
	dq[backIdx++] = value;
}

int pop_front() {
	if (empty()) {
		return -1;
	}
	else {
		return dq[frontIdx++];
	}
}

int pop_back() {
	if (empty()) {
		return -1;
	}
	else {
		return dq[--backIdx];
	}
}

int size() {
	return backIdx - frontIdx;
}

int front() {
	if (empty()) {
		return -1;
	}
	else {
		return dq[frontIdx];
	}
}

int back() {
	if (empty()) {
		return -1;
	}
	else {
		return dq[backIdx - 1];
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	while (n--) {
		cin >> s;

		if (s == "push_back") {
			int input;
			cin >> input;
			push_back(input);
		}
		if (s == "push_front") {
			int input;
			cin >> input;
			push_front(input);
		}
		if (s == "pop_back") {
			cout << pop_back() << "\n";
		}
		if (s == "pop_front") {
			cout << pop_front() << "\n";
		}
		if (s == "empty") {
			cout << empty() << "\n";
		}
		if (s == "size") {
			cout << size() << "\n";
		}
		if (s == "front") {
			cout << front() << "\n";
		}
		if (s == "back") {
			cout << back() << "\n";
		}
	}

	return 0;
}	