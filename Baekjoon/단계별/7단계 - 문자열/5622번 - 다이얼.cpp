#include <iostream>
#include <string>

using namespace std;

string s;
int sum, cnt[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		sum += cnt[s[i] - 'A'];
	}

	cout << sum;

	return 0;
}