#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
// 문자열에 0밖에 없으면 true
bool onlyZero(string s)
{
	for (char c : s)
	{
		if (c != '0')
		{
			return false;
		}
	}

	return true;
}

string solution(string X, string Y) {
	string answer = "";
	map<char, int> visited;

	for (char c : X)
	{
		visited[c]++;
	}

	for (char c : Y)
	{
		if (visited[c] != 0)
		{
			answer += c;

			visited[c]--;
		}
	}

	if (answer == "")
	{
		return "-1";
	}

	if (onlyZero(answer))
	{
		return "0";
	}

	sort(answer.begin(), answer.end(), greater<char>());
	return answer;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << solution("5525" , "1255");
    return 0;
}	