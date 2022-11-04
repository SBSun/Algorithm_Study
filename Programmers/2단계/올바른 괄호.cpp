#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    for (char c : s) {
        if (c == '(')
            st.push(c);
        else
        {
            if (st.empty() || st.top() != '(') {
                return false;
            }
            st.pop();
        }
    }
    answer = st.empty();
    return answer;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution("(()(") << "\n";

    return 0;
}	