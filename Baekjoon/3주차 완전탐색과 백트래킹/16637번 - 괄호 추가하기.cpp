#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

vector<int> num;
vector<char> oper_str;
int n, ret = -987654321;
string s;

// 연산결과
int oper(char a, int b, int c) {
	if (a == '+')
		return b + c;
	if (a == '-')
		return b - c;
	if (a == '*')
		return b * c;
} 

void go(int here, int _num) {
	// 마지막 피연산자라면 종료
	if (here == num.size() - 1) {
		ret = max(ret, _num);
		return;
	}

	// 순서대로 연산
	go(here + 1, oper(oper_str[here], _num, num[here + 1]));

	// 반대로 연산, 오버플로우 체크
	if (here + 2 <= num.size() - 1) {
		int temp = oper(oper_str[here + 1], num[here + 1], num[here + 2]);
		go(here + 2, oper(oper_str[here], _num, temp));
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++) {
		// 피연산자 추가
		if (i % 2 == 0)
			num.push_back(s[i] - '0');
		// 연산자 추가
		else
			oper_str.push_back(s[i]);
	}

	go(0, num[0]);
	cout << ret << "\n";
	return 0;
}