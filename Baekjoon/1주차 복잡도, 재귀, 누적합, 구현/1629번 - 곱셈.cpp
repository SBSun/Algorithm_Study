#include <iostream>

using namespace std;
typedef long long ll;

// 범위가 21억 이하이므로 long long
ll a, b, c;

ll go(ll a, ll b) {
	if (b == 1)
	{
		return a % c;
	}

	// 재귀함수로 b / 2번씩 곲한 값을 구한다.
	ll ret = go(a, b / 2);
	ret = (ret * ret) % c; 

	// 홀수일 경우 한번 더 곱해준다
	if (b % 2)
		ret = (ret * a) % c;

	return ret;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a >> b >> c;
	cout << go(a, b) << "\n";

	return 0;
}	