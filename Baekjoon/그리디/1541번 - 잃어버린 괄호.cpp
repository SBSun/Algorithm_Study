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
		if (s[i] == '-' || s[i] == '+' || i == s.length()) { // �����ڰų� index�� ������ �����ߴٸ� ���
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

		if (s[i] == '-') // '-'�� ������ �� ���� ���ڵ��� ��� ���̳ʽ� �������� 
			isMinus = true;
	}
	cout << ret << "\n";
	return 0;
}