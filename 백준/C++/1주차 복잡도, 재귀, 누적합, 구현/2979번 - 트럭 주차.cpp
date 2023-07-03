#include <iostream>
#include <string>

using namespace std;

int cnt[101], a, b, c, ret;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++) {
		int start, end;
		cin >> start >> end;
		for (int j = start; j < end; j++) {
			cnt[j]++;
		}
	}

	for (int i : cnt) {
		if (i == 1)
			ret += a;
		else if (i == 2)
			ret += b * 2;
		else if (i == 3)
			ret += c * 3;
	}

	cout << ret << "\n";
	return 0;
}