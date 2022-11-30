#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s, num;
int ret;
bool isMinus;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> s;

	for (int i = 0; i <= s.length(); i++) {
		if (s[i] == '-' || s[i] == '+' || i == s.length()) { // 연산자거나 index가 끝까지 도달했다면 계산
			if (isMinus) {
				ret -= stoi(num);
				num = "";
			}
			else {
				ret += stoi(num);
				num = "";
			}
		}
		else {
			num += s[i];
		}

		if (s[i] == '-') // '-'가 나오면 그 뒤의 숫자들은 모두 마이너스 연산으로 
			isMinus = true;
	}
	cout << ret << "\n";
	return 0;
}