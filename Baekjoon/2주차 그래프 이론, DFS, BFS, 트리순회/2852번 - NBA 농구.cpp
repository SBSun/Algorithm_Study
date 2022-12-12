#include <string>
#include <iostream>
#include <map>
using namespace std;
#define prev sbs
int n, o, A, B, asum, bsum;
string s, prev;

string print(int a) {
    // ����ȭ
    string minute = "00" + to_string(a / 60);
    string second = "00" + to_string(a % 60);
    return minute.substr(minute.size() - 2, 2) + ":" + second.substr(second.size() - 2, 2);
}

// ��:�ʸ� �� ������ ��ȯ
int changeToInt(string a) {
    return stoi(a.substr(0, 2)) * 60 + stoi(a.substr(3, 2));
}

// �������� ������ �ð����� ���� ������ �ð��� ���̰��� �����ش�.
void go(int& sum, string s) {
    sum += (changeToInt(s) - changeToInt(prev));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> o >> s;

        if (A > B)
            go(asum, s);
        else if (B > A)
            go(bsum, s);

        o == 1 ? A++ : B++;
        prev = s;
    }

    if (A > B)
        go(asum, "48:00");
    else if (B > A)
        go(bsum, "48:00");
    cout << print(asum) << "\n" << print(bsum) << "\n";
    return 0;
}
