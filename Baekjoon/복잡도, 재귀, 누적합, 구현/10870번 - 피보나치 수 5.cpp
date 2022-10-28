#include <iostream>
#include <algorithm>

using namespace std;

int fibonacci(int a){
	if(a <= 1)
		return a;
	
	return fibonacci(a - 1) + fibonacci(a - 2); 
}

int n;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	cout << fibonacci(n) << "\n";
	return 0;
}
