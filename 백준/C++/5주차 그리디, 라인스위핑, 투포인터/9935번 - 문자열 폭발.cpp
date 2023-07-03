#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

string s, t, ret;
stack<char> st;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> s >> t;

	for (char a : s) {
		st.push(a);

		if (st.size() >= t.size() && st.top() == t.back())
		{
			string ss = "";
			for (char i : t) {
				ss += st.top();
				st.pop();
			}

			reverse(ss.begin(), ss.end());

			if (ss != t) {
				for (char i : ss) {
					st.push(i);
				}
			}
		}
	}

	if (st.empty())
		cout << "FRULA" << "\n";
	else
	{
		while (st.size()) {
			ret += st.top();
			st.pop();
		}

		reverse(ret.begin(), ret.end());

		cout << ret << "\n";
	}


	return 0;
}
/*
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s, t, ret;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> s >> t;

	for (char a : s) {
		ret += a;
		if (ret.size() >= t.size() && ret.substr(ret.size() - t.size(), t.size()) == t) {
			ret.erase(ret.end() - t.size(), ret.end());
		}
	}

	if (!ret.size())
		cout << "FRULA" << "\n";
	else
		cout << ret << "\n";

	return 0;
}*/