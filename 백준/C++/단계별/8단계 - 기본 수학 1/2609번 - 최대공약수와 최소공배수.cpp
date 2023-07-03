#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int a, int b) {
    int A = max(a, b);
    int B = min(a, b);

    while (A % B != 0) {
        int R = A % B;
        A = B;
        B = R;
    }

    return B;
}

int LCM(int a, int b, int gcd) {
    return a * b / gcd;
}

int n, m, gcd;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    gcd = GCD(n, m);
    cout << gcd << "\n";
    cout << LCM(n, m, gcd);

    return 0;
}