#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
    // 1. phoneBook �迭�� �����Ѵ�.
    sort(phone_book.begin(), phone_book.end());

    // 2. 1�� Loop�� ���� �� ��ȣ�� �� ��ȣ�� ���ξ����� Ȯ���Ѵ�.
    for (int i = 0; i < phone_book.size() - 1; i++)
        if (phone_book[i + 1].find(phone_book[i]) == 0)
            return false;

    // 3. ������� ���� ���ξ ���ٴ� ���̴�.
    return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cout << solution({ "12","123","1235","567","88" }) << "\n";

	return 0;
}