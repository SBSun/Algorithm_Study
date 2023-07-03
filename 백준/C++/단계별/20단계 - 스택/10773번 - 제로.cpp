#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int k, num, sum;
stack<int> s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> num;

		if (!num)
			s.pop();
		else
			s.push(num);
	}

	for (int i = s.size(); i > 0; i--) {
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}	