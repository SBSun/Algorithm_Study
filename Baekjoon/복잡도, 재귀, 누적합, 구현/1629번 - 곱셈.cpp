#include <iostream>

using namespace std;
typedef long long ll;

// ������ 21�� �����̹Ƿ� long long
ll a, b, c;

ll go(ll a, ll b) {
	if (b == 1)
	{
		return a % c;
	}

	// ����Լ��� b / 2���� ���� ���� ���Ѵ�.
	ll ret = go(a, b / 2);
	ret = (ret * ret) % c; 

	// Ȧ���� ��� �ѹ� �� �����ش�
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