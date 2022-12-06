#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int t, n, cnt, max_score;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
  
   cin >> t;
   while(t--){
       cin >> n;
       vector<pair<int,int>> v;
       for(int i = 0; i < n; i++){
            int r1, r2;
            cin >> r1 >> r2;
            v.push_back({r1, r2});
       }
       sort(v.begin(), v.end());
       max_score = v[0].second;
       cnt = 1;
       for(int i = 1; i < n; i++){
            if(max_score >= v[i].second){
                cnt++;
                max_score = v[i].second;
            }
       }
       cout << cnt << "\n";
   }
  
   return 0;
}
