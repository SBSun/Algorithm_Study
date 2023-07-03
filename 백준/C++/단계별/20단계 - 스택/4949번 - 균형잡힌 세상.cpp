#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

string s;

string checkVPS(string input) {
	stack<char> st;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '(' || input[i] == '[') {
			st.push(input[i]);
		}
		else if (input[i] == ')') {
			if (!st.empty() && st.top() == '(')
				st.pop();
			else
			{
				return "no";
			}
		}
		else if (input[i] == ']') {
			if (!st.empty() && st.top() == '[')
				st.pop();
			else
			{
				return "no";
			}
		}
	}

	if (st.empty())
		return "yes";
	else
		return "no";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		getline(cin, s);

		if (s[0] == '.')
			break;

		cout << checkVPS(s) << "\n";
	}

	return 0;
}	