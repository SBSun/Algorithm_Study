#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX 4000000

int n;
vector<bool> check;
vector<int> prime;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

	check.resize(n + 1, 1);

	for (int i = 2; i * i <= n; i++) {
		if (!check[i])
			continue;

		// j�� i�� ����̱� ������ �Ҽ� X
		for (int j = i + i; j <= n; j += i) {
			check[j] = false;
		}
	}

	// �Ҽ��� ������ vector�� �߰�
	for (int i = 2; i < n + 1; i++) {
		if (check[i] == true)
			prime.push_back(i);
	}

	int cnt = 0, high = 0, low = 0, sum = 0;

	while (1) {
		// low���� high������ �Ҽ� ���� n���� ũ�ų� ������ low ���� ���ش�.
		if (sum >= n)
			sum -= prime[low++];
		// high�� �ε����� �Ҽ��� ������ ������ ����
		else if (high == prime.size())
			break;
		// low���� high������ �Ҽ� ���� n���� ������ high ���� �����ش�.
		else
			sum += prime[high++];

		if (sum == n) 
			cnt++;
	}

	cout << cnt << "\n";

	return 0;
}
