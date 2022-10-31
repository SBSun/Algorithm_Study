#include <iostream>

using namespace std;
#define MAX 5

int a[MAX], n, sum, temp;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < MAX; i++) {
		cin >> a[i];
		sum += a[i];
	}

	int j;
	for (int i = 1; i < MAX; i++) {
	    temp = a[i];

		for (j = i - 1; j >= 0 && a[j] > temp; j--) {
			a[j + 1] = a[j];
		}

		a[j + 1] = temp;
	}

	cout << sum / 5 << "\n" << a[2];

	return 0;
}