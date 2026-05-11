#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
   
     while(q--){
        int n;
        cin >> n;
       
       vector<int>v(n);
       long long sum=0;
 
       for(int i=0;i<n;i++){
        cin >> v[i];
        sum += v[i];
       }
 
       int ans = (sum+ n -1)/n;
       cout << ans <<"
";
        
        
 
     }
    return 0;
}