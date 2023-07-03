#include <iostream>
#include <string>

using namespace std;

int n, sum;
string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	cin >> s;
	sum = 0;

	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}

	cout << sum;
	return 0;
}