#include <iostream>

using namespace std;

#define MAX 10000

int t, n, a[MAX + 1];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 2; i <= MAX; i++) {
		a[i] = i;
	}

	for (int i = 2; i * i <= MAX; i++) {
		if (a[i] == 0)
			continue;
		for (int j = i * i; j <= MAX; j += i) {
			a[j] = 0;
		}
	}

	cin >> t;

	while (t--) {
		cin >> n;

		int half = n / 2;

		for (int i = 0; i < half; i++) {
			int temp1 = half - i;
			int temp2 = n - temp1;

			if (a[temp1] != 0 && a[temp2] != 0) {
				cout << temp1 << " " << temp2 << "\n";
				break;
			}
		}
	}

	return 0;
}