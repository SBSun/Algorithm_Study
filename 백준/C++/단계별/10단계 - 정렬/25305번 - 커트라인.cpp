#include <iostream>

using namespace std;
#define MAX 1000

int a[MAX + 1], n, k, j, temp;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		temp = a[i];

		for (j = i - 1; j >= 0 && a[j] < temp; j--) {
			a[j + 1] = a[j];
		}

		a[j + 1] = temp;
	}

	cout << a[k - 1] << "\n";

	return 0;
}