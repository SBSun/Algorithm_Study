#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n;
double input;
priority_queue<double> pq;
vector<double> v;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (pq.size() == 7) {
			pq.push(input);
			pq.pop();
		}
		else {
			pq.push(input);
		}
	}

	while (pq.size()) {
		v.push_back(pq.top());
		pq.pop();
	}
	reverse(v.begin(), v.end());
	cout << fixed;
	cout.precision(3);
	for (double d : v) {
		cout << d << "\n";
	}

	return 0;
}