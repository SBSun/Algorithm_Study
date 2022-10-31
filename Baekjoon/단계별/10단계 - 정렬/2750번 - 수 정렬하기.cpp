#include <iostream>

using namespace std;

#define MAX 1000

int n, temp, j, a[MAX + 1];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// »ðÀÔ Á¤·Ä
	for (int i = 1; i < n; i++) {
		temp = a[i];

		for (j = i - 1; j >= 0 && a[j] > temp; j--) {
			a[j + 1] = a[j];
		}

		a[j + 1] = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << "\n";
	}

	return 0;
}