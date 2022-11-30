#include <iostream>
#include <algorithm>
using namespace std;

int n, ret, sum, a[1001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		sum += a[i];
		ret += sum;
	}

	cout << ret << "\n";
	return 0;
}