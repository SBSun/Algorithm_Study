#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int i = 666;

	cin >> n;

	for (;; i++) {
		if (to_string(i).find("666") != string::npos)
			n--;

		if (n == 0)
			break;
	}

	cout << i << "\n";
	
	return 0;
}