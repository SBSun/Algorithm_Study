#include <iostream>

using namespace std;

int n, cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;

	while (n >= 0) {
		if (n % 5 == 0) {
			cnt += n / 5;
			cout << cnt;
			return 0;
		}
		n -= 3;
		cnt++;
	}

	cout << -1;

	return 0;
}