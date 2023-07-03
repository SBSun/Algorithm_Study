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

		// 입력한 x값이 될때까지 반복하여 증가 및 push
		while (cnt <= x) {
			s.push(cnt);
			cnt += 1;
			result.push_back('+');	
		}
		// 입력한 x값이 스택의 top과 같다면 제거
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