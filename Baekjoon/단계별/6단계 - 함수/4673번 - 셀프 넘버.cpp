#include <iostream>

using namespace std;

int d(int n){
	int sum = n;
	
	while(n != 0){
		sum = sum + (n % 10);
		n = n / 10;
	}
	
	return sum;
}

bool check[10001] = {false,};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for(int i = 1; i < 10001; i++){
		int n = d(i);
		if(n < 10001)
			check[n] = true;
	} 
	
	for(int i = 1; i < 10001; i++){
		if(!check[i]){
			cout << i << "\n";
		}
	}

	return 0;
}
