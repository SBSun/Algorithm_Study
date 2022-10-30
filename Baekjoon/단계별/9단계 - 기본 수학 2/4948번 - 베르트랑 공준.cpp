#include <iostream>

using namespace std;

#define MAX 123456 * 2

int n;
int a[MAX + 1];
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

	while (1) {
		int num;
		cin >> num;

		if (!num)
			break;
		int cnt = 0;
		for (int i = num + 1; i <= num * 2; i++) {
			if (a[i] != 0)
				cnt++;
		}

		cout << cnt << "\n";
	}
	return 0;
}