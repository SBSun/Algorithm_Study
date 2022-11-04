#include <string>
#include <iostream>

using namespace std;
string s;
int lcnt, vcnt;
bool isVowel(int idx) {
    return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (true) {
        cin >> s;

        if (s == "end")
            break;

        lcnt = vcnt = 0;
        bool flag = false;
        bool isIncludeVowel = false;
        int prev = -1;

        for (int i = 0; i < s.size(); i++) {
            int idx = s[i];
            // 모음이면
            if (isVowel(idx)) {
                lcnt++;
                vcnt = 0;
                isIncludeVowel = true;
            }
            else {
                vcnt++;
                lcnt = 0;
            }

            // 연속적으로 모음 또는 자음이 3번 입력되면 안된다.
            if (lcnt == 3 || vcnt == 3)
                flag = true;

            // 같은 문자가 2번 입력되었을 때 그 문자가 'e' 또는 'o'이 아니라면 X
            if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o')) {
                flag = true;
            }
            prev = idx;
        }

        // 모음이 포함되어 있지 않으면 
        if (!isIncludeVowel)
            flag = true;

        if (flag)
            cout << "<" << s << ">" << " is not acceptable.\n";
        else
            cout << "<" << s << ">" << " is acceptable.\n";
    }

    return 0;
}
