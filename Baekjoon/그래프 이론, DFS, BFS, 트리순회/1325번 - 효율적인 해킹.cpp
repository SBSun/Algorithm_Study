#include <iostream>
#include <stack>
#include <string>
using namespace std;

int n, a[1000001], ret[1000001];
stack<int> st;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;

	// -1�� �迭 �ʱ�ȭ
	memset(ret, -1, sizeof(ret));

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		// stack�� ��Ұ� �ְ� top()�� �Է��� ������ ������
		while (st.size() && a[st.top()] < a[i]) {
			ret[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	
	for(int i = 0; i < n; i++)
		cout <<	ret[i] << " ";
	return 0;
}
