#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;
int one, zero;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[i + 1])
		{
			if (s[i] == '0')
				zero++;
			else
				one++;
		}
	}

	cout << min(zero, one) << "\n";
	return 0;
}