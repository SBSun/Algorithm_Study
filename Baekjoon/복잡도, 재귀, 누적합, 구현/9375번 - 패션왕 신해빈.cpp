#include <iostream>
#include <string>
#include <map>
using namespace std;

int t, n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		map<string, int> m;

		for (int j = 0; j < n; j++) {
			string input1, input2;
			cin >> input1 >> input2;

			m[input2]++;
		}	

		int cnt = 1;
		for (auto a : m) {
			cnt *= a.second + 1;
		}

		cnt--;
		cout << cnt << "\n";
	}

	return 0;
}