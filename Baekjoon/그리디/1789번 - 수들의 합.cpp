#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
ll n, cnt = 1, sum;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	while (true) {
		sum += cnt;
		if(sum > n) {
			cnt--;
			break;
		}
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}