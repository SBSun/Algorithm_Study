#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    bool flag = true;
    for (char ss : s) {
        ss = tolower(ss);
        answer += flag ? toupper(ss) : ss;
        flag = isspace(ss) ? true : false;
    }

    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution("3people unFollowed me") << "\n";

    return 0;
}	