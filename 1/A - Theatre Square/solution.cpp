#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long  n,m,a;
    cin >> n >> m >> a;
 
    long long ans = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << ans;
    return 0;
}