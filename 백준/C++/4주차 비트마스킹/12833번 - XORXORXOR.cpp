#include <iostream>
#include <algorithm>
using namespace std;
int A, B, C;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);	
	
	cin >> A >> B >> C;
	
	if(C % 2)
		A = A ^ B;
	
	cout << A << "\n";
	return 0;
}
