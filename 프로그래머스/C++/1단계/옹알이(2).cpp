#include <iostream>
#include <string>
#include <vector>

using namespace std;

string lastBabbling, curBabbling;

int solution(vector<string> babbling) {
    int answer = 0;

    for (int i = 0; i < babbling.size(); i++) {
        lastBabbling = "";
        curBabbling = "";

        for (char c : babbling[i]) {
            curBabbling += c;

            if (lastBabbling != curBabbling && (curBabbling == "aya" || curBabbling == "ye" || curBabbling == "woo" || curBabbling == "ma")) {
                lastBabbling = curBabbling;
                curBabbling = "";
            }
        }

        if (curBabbling.empty())
            answer++;
    }

    return answer;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<string> babbling = { "aya", "yee", "u", "maa" };
    cout << solution(babbling) << "\n";
    return 0;
}