#include <iostream>
#include <string>

using namespace std;

string s;
string alpha[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	for (int i = 0; i < 8; i++) {
		while (1) {
			int index = (int)s.find(alpha[i]);
			if (index == -1) {
				break;
			}
			s.replace(index, alpha[i].length(), "#");
		}	
	}

	cout << s.length();
	return 0;
}