#include <iostream>
#include <algorithm>

using namespace std;

int fac(int a){
	if(a <= 1)
		return 1;
	
	return a * fac(a - 1); 
}

int n;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	cout << fac(n) << "\n";
	return 0;
}
