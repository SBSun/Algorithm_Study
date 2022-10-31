#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

stack<int> s;
vector<char> result;
int n, cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cnt = 1;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		// �Է��� x���� �ɶ����� �ݺ��Ͽ� ���� �� push
		while (cnt <= x) {
			s.push(cnt);
			cnt += 1;
			result.push_back('+');	
		}
		// �Է��� x���� ������ top�� ���ٸ� ����
		if (s.top() == x) {
			s.pop();
			result.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
	return 0;
}	