#include <string>
#include <iostream>
using namespace std;

int H, W, a[101][101];
string s, ret;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        cin >> s;
        // �̸� '.'�� �������� -1�� �ʱ�ȭ�ϰ� 'c' ������ 0���� �ʱ�ȭ
        for (int j = 0; j < W; j++) {
            if (s[j] == '.')
                a[i][j] = -1;
            else
                a[i][j] = 0;
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W - 1; j++) {
            if (a[i][j] == 0) {
                int cnt = 1;

                while (a[i][j + 1] == -1) {
                    a[i][j + 1] = cnt++;
                    j++;
                }
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
