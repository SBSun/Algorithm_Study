#include <iostream>

using namespace std;

int n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	int i = 1;
	while (n > i) {
		n -= i;
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - n << '/' << n;
	else
		cout << n << '/' << i + 1 - n;
	return 0;
}