#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s1, s2;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s1 >> s2;

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	cout << max(stoi(s1), stoi(s2));

	return 0;
}