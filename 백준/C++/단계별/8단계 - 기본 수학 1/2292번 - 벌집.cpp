#include <iostream>

using namespace std;

int n, cnt, ptr;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	ptr = 1;
	cnt = 1;
	while (ptr < n) {
		ptr += cnt * 6;
		cnt++;
	}

	cout << cnt;

	return 0;
}