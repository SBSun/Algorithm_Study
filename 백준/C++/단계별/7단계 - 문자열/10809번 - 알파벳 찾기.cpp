#include <iostream>
#include <string>

using namespace std;

string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> s;

	for (int i = 'a'; i <= 'z'; i++) {
		cout << (int)s.find((char)i) << " ";
	}

	return 0;
}