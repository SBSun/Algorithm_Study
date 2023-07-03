#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n, ret, a[26];
string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		int pow = 1;
		for (int j = s.length() - 1; j >= 0; j--) {
			a[s[j] - 'A'] += pow;
			pow *= 10;
		}
	}

	sort(a, a + 26, greater<>());

	int num = 9;
	for (int i = 0; i < 26; i++) {
		if (a[i] == 0)
			break;

		ret += a[i] * num;
		num--;
	}
	cout << ret << "\n";
	return 0;
}