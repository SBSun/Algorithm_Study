#include <iostream>
#include <queue>
using namespace std;

int n, input; 
queue<int> q;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	while(cin >> input){
		if(input == -1)
			break;
			
		if(input){
			if(q.size() < n){
				q.push(input);
			}
		}else{
			q.pop();
		}
    }
    
    if(q.empty())
    	cout << "empty\n";
    else
    {
    	for(int i = q.size(); i > 0; i--){
    		cout << q.front() << " ";
    		q.pop();
		}
	}	
	return 0;
}
