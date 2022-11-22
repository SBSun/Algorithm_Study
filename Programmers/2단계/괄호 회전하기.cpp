#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

bool check(string s) {
    stack<char> st;

    for (int j = 0; j < s.length(); j++) {
        if (s[j] == '(' || s[j] == '{' || s[j] == '[') {
            st.push(s[j]);
        }
        else {
            if (st.empty()) {
                return false;
            }

            if (s[j] == ')' && st.top() == '(')
                st.pop();
            if (s[j] == '}' && st.top() == '{')
                st.pop();
            if (s[j] == ']' && st.top() == '[')
                st.pop();
        }
    }

    if (!st.empty())
        return false;

    return true;
}

int solution(string s) {
    int answer = 0;

    for(int i = 0; i < s.length(); i++){
        if (check(s))
            answer++;

        char c = s.front();
        s.erase(s.begin());
        s.push_back(c);
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cout << solution("}]()[{") << "\n";
    return 0;
}