#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string temp = "";
    int cnt_zero = 0, size, round = 0;

    while (s != "1") {
        temp = "";
        round++;

        for (char c : s) {
            // 현재 s문자열의 0개수 
            if (c == '0') {
                cnt_zero++;
            }
            else {
                temp += '1';
            }
        }
        // 1의 개수
        size = temp.length();
        s = "";
        while (size > 0) {
            // 0 또는 1
            s += to_string(size % 2);
            size = size / 2;
        }
    }

    answer.push_back(round);
    answer.push_back(cnt_zero);
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s = "0111010";

    vector<int> v = solution(s);

    cout << v[0] << " " << v[1] << "\n";

    return 0;
}