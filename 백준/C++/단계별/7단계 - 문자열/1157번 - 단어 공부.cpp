#include <iostream>
#include <string>

using namespace std;

int a[26], m;
string s;
char c;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i])) {
			a[s[i] - 'A']++;
		}
		else {
			a[s[i] - 'a']++;
		}
	}
	m = -1;
	for (int i = 0; i < 26; i++) {
		if (a[i] > m) {
			m = a[i];
			c = 'A' + i;
		}
		else if (a[i] == m) {
			c = '?';
		}
	}

	cout << c;

	return 0;
}