#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string s, ret;
int n;
vector<string> v;

void go() {
    // 맨 앞의 문자가 '0'이면 제거
    while (true) {
        if (ret.size() && ret.front() == '0')
            ret.erase(ret.begin());
        else
            break;
    }

    // ret의 문자들이 모두 제거되면 0 추가
    if (ret.size() == 0)
        ret = "0";
    v.push_back(ret);
    ret = "";
}

bool compare(string a, string b) {
    if (a.size() == b.size()) {
        return a < b;
    }

    return a.size() < b.size();
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        ret = "";

        for (int j = 0; j < s.size(); j++) {
            if (s[j] < 65)
                ret += s[j];
            else if (ret.size())
                go();
        }
        if (ret.size())
            go();
    }

    sort(v.begin(), v.end(), compare);

    for (string i : v) {
        cout << i << "\n";
    }

    return 0;
}
