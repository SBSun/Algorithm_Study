#include <iostream>

using namespace std;

#define MAX 1000000

int m, n;
int a[MAX + 1];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> m >> n;

	for (int i = 2; i <= n; i++) {
		a[i] = i;
	}

	for (int i = 2; i * i <= n; i++) {
		if (a[i] == 0)
			continue;

		for (int j = i * i; j <= n; j += i) {
			a[j] = 0;
		}
	}

	for (int i = m; i <= n; i++) {
		if (a[i] != 0)
			cout << a[i] << "\n";
	}

	return 0;
}