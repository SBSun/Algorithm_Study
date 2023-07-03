#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct node {
	char left;
	char right;
};

vector<node> v(27);
int n;

// 전위 순회
void preOrder(char node) {
	if (node == '.')
		return;

	cout << node;
	preOrder(v[node - 'A'].left);
	preOrder(v[node - 'A'].right);
}

void inOrder(char node) {
	if (node == '.')
		return;

	inOrder(v[node - 'A'].left);
	cout << node;
	inOrder(v[node - 'A'].right);
}

void postOrder(char node) {
	if (node == '.')
		return;

	postOrder(v[node - 'A'].left);
	postOrder(v[node - 'A'].right);
	cout << node;
}

// 후위 순회
void postOrder(int here) {

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	char rt, l, r;
	for (int i = 0; i < n; i++) {
		cin >> rt >> l >> r;
		v[rt - 'A'].left = l;
		v[rt - 'A'].right = r;
	}

	preOrder('A');
	cout << "\n";
	inOrder('A');
	cout << "\n";
	postOrder('A');
	return 0;
}