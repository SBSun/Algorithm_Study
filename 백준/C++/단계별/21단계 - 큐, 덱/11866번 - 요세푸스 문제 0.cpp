#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int n, k;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;
	
	for(int i = 1; i <= n;i++)
		q.push(i);
	cout << "<";
	while(!q.empty()){
		if(q.size() == 1){
			cout << q.front() << ">\n";
			return 0;
		}
		
		for(int i = 1; i < k; i++){
			q.push(q.front());
			q.pop();
		}
		
		cout << q.front() << ", ";
		q.pop();
	}

	return 0;
}
