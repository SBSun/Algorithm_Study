#include <iostream>

using namespace std;

bool isP(int x) {
	if (x == 1) 
		return 0;

	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}

	return 1;
}

int m, n, sum, minValue;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> m >> n;
	for (int i = m; i <= n; i++) {

		if (isP(i)) {
			if (minValue == 0)
				minValue = i;
			sum += i;
		}
	}

	if (minValue == 0)
	{
		cout << "-1";
	}
	else {
		cout << sum << "\n" << minValue;
	}

	return 0;
}