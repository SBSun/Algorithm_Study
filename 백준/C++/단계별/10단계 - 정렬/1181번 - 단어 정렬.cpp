#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string s[20001];

bool compare(string a, string b) {
	// 길이가 같다면 사전 순으로
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return	a.length() < b.length();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {

		if (s[i] == s[i + 1])
			continue;

		cout << s[i] << "\n";
	}

	return 0;
}	