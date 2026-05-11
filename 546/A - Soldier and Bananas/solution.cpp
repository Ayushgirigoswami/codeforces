#include<bits/stdc++.h>
using namespace std;
 
int main(){
      ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int k,n,w;
    cin >> k >> n >> w;
    // 3 - 1
    // 6 - 2
    // 9 - 3
    // 12 - 4 
 
    // 17+13=30
    int sum = 0;
   
        for(int i=1;i<=w;i++){
            sum += k*i;
        }
        if(sum>n) cout << sum - n;
       else cout << 0;
    
 
 
    return 0;
}