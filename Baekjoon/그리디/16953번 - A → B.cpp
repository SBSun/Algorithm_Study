#include <iostream>
#include <algorithm>
using namespace std;

int a, b, ret;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;

	while (true)
	{
		if (a > b) {
			cout << -1 << "\n";
			break;
		}
		
		if (a == b) {
			ret++;
			cout << ret << "\n";
			break;
		}

		if (b % 10 == 1)
		{
			b--;
			b /= 10;
		}
		else if (b % 2 == 0)
			b /= 2;
		else
		{
			cout << -1 << "\n";
			break;
		}
		ret++;
	}
	return 0;
}