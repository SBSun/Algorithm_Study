#include <iostream>
#include <string>

using namespace std;

string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			cout << 0 << "\n";
			return 0;
		}
	}

	cout << 1 << "\n";

	return 0;
}