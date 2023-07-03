#include <iostream>

using namespace std;

int h(int n)
{
	int cnt = 0;

	if (n < 100) {
		return n;
	}
	else {
		cnt = 99;

		for (int i = 100; i <= n; i++) {
			int hun = i / 100;
			int ten = (i / 10) % 10;
			int one = i % 10;

			if ((hun - ten) == (ten - one)) {
				cnt++;
			}
		}
		return cnt;
	}
}

int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	cout << h(n) << "\n";
	return 0;
}