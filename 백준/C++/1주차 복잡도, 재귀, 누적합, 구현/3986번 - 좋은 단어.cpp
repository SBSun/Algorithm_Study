#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int n, cnt;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		stack<char> stack;
		string word;
		cin >> word;

		for (int j = 0; j < word.length(); j++) {
			if (stack.empty()) { // stack�� ��������� ���� ���� �߰�
				stack.push(word[j]);
			}
			else {
				if (stack.top() == word[j]) { // stack�� top�� �ִ� ���ڿ� �����Ͱ� ����Ű�� ���ڰ� ������ pop
					stack.pop();
				}
				else { // �ٸ��� push
					stack.push(word[j]); 
				}
			}
		}

		if (stack.empty()) { // ��������� ����
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}