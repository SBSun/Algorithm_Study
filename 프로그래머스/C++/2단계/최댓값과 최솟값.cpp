#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> split(string input, char delimiter) {
    vector<int> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(stoi(temp));
    }

    return answer;
}

string solution(string s) {
    string answer = "";

    vector<int> splits = split(s, ' ');

    sort(splits.begin(), splits.end());
    answer = to_string(splits.front()) + " " + to_string(splits.back());

    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution("-1 -2 -3 -4") << "\n";

    return 0;
}	