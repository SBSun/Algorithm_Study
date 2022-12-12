#include <iostream>
#include <string>

using namespace std;

int cnt[26], n;
string res;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		cnt[input[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 5)
			res += 'a' + i;
	}

	if (res.empty())
		cout << "PREDAJA\n";
	else
		cout << res << "\n";

	return 0;
}