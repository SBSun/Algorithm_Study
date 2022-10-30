#include <iostream>

using namespace std;

int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;

	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			cout << i << "\n";
			n /= i;
		}
	}
	
	if (n > 1)
		cout << n << "\n";
	return 0;
}