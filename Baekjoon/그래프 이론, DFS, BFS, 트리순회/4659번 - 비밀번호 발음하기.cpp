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
            // �����̸�
            if (isVowel(idx)) {
                lcnt++;
                vcnt = 0;
                isIncludeVowel = true;
            }
            else {
                vcnt++;
                lcnt = 0;
            }

            // ���������� ���� �Ǵ� ������ 3�� �ԷµǸ� �ȵȴ�.
            if (lcnt == 3 || vcnt == 3)
                flag = true;

            // ���� ���ڰ� 2�� �ԷµǾ��� �� �� ���ڰ� 'e' �Ǵ� 'o'�� �ƴ϶�� X
            if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o')) {
                flag = true;
            }
            prev = idx;
        }

        // ������ ���ԵǾ� ���� ������ 
        if (!isIncludeVowel)
            flag = true;

        if (flag)
            cout << "<" << s << ">" << " is not acceptable.\n";
        else
            cout << "<" << s << ">" << " is acceptable.\n";
    }

    return 0;
}
