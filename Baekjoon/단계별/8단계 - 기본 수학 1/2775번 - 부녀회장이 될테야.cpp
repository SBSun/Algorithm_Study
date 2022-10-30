#include <iostream>

using namespace std;

int t, k, n, a[15][15];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> t;
	
	while (t--) {
		cin >> k >> n;

		for (int i = 1; i <= n; i++) {
			a[0][i] = i;
		}

		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= n; j++) {
				if (j == 1) {
					a[i][1] = 1;
				}
				else {
					a[i][j] = a[i][j - 1] + a[i - 1][j];
				}
			}
		}

		cout << a[k][n] << "\n";
	}

	return 0;
}