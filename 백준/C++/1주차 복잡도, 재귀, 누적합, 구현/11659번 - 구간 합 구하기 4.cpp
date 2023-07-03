#include <iostream>
#include <algorithm>

using namespace std;

int n, m, i, j, psum[100004];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int a = 1; a <= n; a++) {
		int temp;
		cin >> temp;

		psum[a] = psum[a - 1] + temp;
	}

	for (int a = 0; a < m; a++) {
		cin >> i >> j;

		cout << psum[j] - psum[i - 1] << "\n";
	}

	return 0;
}