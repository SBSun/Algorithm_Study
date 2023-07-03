#include <iostream>
#include <string>

using namespace std;

int n, r;
string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> r >> s;
		
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < r; k++) {
				cout << s[j];
			}
		}

		cout << "\n";
	}

	return 0;
}