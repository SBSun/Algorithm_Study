#include <iostream>

using namespace std;

int a, b, c, profit;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;

	profit = c - b;

	if (c > b) {
		cout << (a / profit) + 1;
	}
	else {
		cout << -1;
	}

	return 0;
}