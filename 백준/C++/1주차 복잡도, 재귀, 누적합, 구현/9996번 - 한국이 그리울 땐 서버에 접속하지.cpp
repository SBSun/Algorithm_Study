#include <iostream>
#include <string>

using namespace std;

int n;
string str, f, e;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	cin >> str;

	f = str.substr(0, str.find("*"));
	e = str.substr(str.find("*") + 1);

	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		if (input.size() < f.size() + e.size()) {
			cout << "NE\n";
			continue;
		}
		
		if (f == input.substr(0, f.size()) && e == input.substr(input.size() - e.size())) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}
	}

	return 0;
}