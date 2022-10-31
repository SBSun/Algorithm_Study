#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

string str;
int t;

string checkVPS(string input)
{
	stack<char> st;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '(') {
			st.push(input[i]);
		}
		else {
			if (st.empty()) {
				return "NO";
				break;
			}
			st.pop();
		}
	}

	if (st.empty())
		return "YES";
	else
		return "NO";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;

	while (t--) {
		cin >> str;
		
		cout << checkVPS(str) << "\n";
	}

	return 0;
}	