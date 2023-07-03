#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isNumeric(const string &str) {
    auto it = str.begin();
    while (it != str.end() && isdigit(*it)) {
        it++;
    }
    return !str.empty() && it == str.end();
}

int solution(string s) {
    int answer = 0;
    string words[11] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = 0; i < 10; i++) {
        if (isNumeric(s))
            break;

        int index = (int)s.find(words[i]);

        while (index != -1) {
            s.replace(index, words[i].length(), to_string(i));
            index = (int)s.find(words[i]);
        }
    }

    answer = stoi(s);
    return answer;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    cout << solution("one4seveneight");

    return 0;
}	