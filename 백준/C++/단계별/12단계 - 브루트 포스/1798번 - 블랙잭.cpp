#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a[101];
vector<int> v;
int n, m, _min = 987654321, res;

void combi(int start, vector<int> v) {
	if (v.size() == 3) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			sum += a[v[i]];
		}

		if (sum <= m) {
			if (m - sum <= _min) {
				_min = m - sum;
				res = sum;
			}
		}

		return;
	}

	for (int i = start + 1; i < n; i++) {
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}

	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	combi(-1, v);

	cout << res;
	return 0;
}