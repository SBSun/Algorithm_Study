#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    map<string, bool> m;
    int cnt = 2;   // 몇 번째 사람 차례인지
    int round = 1;
    m[words[0]] = true;
    char next_char = words[0].back();

    for (int i = 1; i < words.size(); i++) {
        if (cnt == n + 1)
            cnt = 1;

        if (next_char != words[i].front() || m[words[i]]) {
            return { cnt, round };
        }

        m[words[i]] = true;
        next_char = words[i].back();

        if (cnt % n == 0)
            round++;

        cnt++;
    }

    return {0, 0};
}

int main() {

    vector<int> v = solution(3, { "tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank" });
    cout << v[0] << " " << v[1] << "\n";

    return 0;
}
