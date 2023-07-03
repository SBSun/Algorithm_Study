#include <iostream>

using namespace std;
#define MAX 10001

int cnt[MAX], n, num;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		cnt[num]++;
	}

	for (int i = 1; i < MAX; i++) {
		if (cnt[i] == 0)
				continue;

		for (int j = 0; j < cnt[i]; j++) {
			cout << i << "\n";
		}
	}

	return 0;
}