#include <iostream>
#include <string>

using namespace std;

int n, cnt;
string s;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		bool check[26] = { false, };
		char c = s[0];
		
		for (int j = 0; j < s.length(); j++) {
			
			// ���� �˻��ϴ� ���ڰ� ���� ���ڿ� ���� �ʰ� �̹� üũ�Ǿ� �ִ� ���ڶ��
			if (s[j] != c && check[s[j] - 'a'])
			{
				cnt--;
				break;
			}
			else {
				c = s[j];
				check[s[j] - 'a'] = true;
			}
		}

		cnt++;
	}
	cout << cnt;
	return 0;
}