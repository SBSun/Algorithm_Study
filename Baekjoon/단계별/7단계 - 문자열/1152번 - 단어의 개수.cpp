#include <iostream>
#include <string>

using namespace std;

int cnt;
string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin, s);

	cnt = 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			cnt++;
		}
	}

	if (s[0] == ' ')
		cnt--;
	if (s[s.length() - 1] == ' ')
		cnt--;

	cout << cnt;

	return 0;
}