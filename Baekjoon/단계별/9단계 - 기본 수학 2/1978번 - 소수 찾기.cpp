#include <iostream>

using namespace std;

int n, cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		bool isFlag = false;
		cin >> input;

		if (input == 1)
		{
			continue;
		}

		for (int j = 2; j < input; j++) {
			if (input % j == 0) {
				isFlag = true;
				break;
			}
		}

		if (!isFlag) {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}