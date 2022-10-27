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
			if (stack.empty()) { // stack이 비어있으면 현재 문자 추가
				stack.push(word[j]);
			}
			else {
				if (stack.top() == word[j]) { // stack의 top에 있는 문자와 포인터가 가르키는 문자가 같으면 pop
					stack.pop();
				}
				else { // 다르면 push
					stack.push(word[j]); 
				}
			}
		}

		if (stack.empty()) { // 비어있으면 증가
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}