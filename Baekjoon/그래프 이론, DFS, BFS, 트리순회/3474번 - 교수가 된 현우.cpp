#include <string>
#include <iostream>
using namespace std;

int n, a;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;   
        int ret2 = 0, ret5 = 0;

        for (int j = 5; j <= a; j *= 5) {
            ret5 += a / j;
        }
        cout << ret5 << "\n";
    }

    return 0;
}
