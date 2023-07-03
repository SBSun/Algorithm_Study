#include <iostream>
#include <string>

using namespace std;

int cnt[26];
string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	
	for (char c : s) {
		cnt[(int)c - 'a']++;
	}

	for (int i : cnt) {
		cout << i << " ";
	}
	return 0;
}