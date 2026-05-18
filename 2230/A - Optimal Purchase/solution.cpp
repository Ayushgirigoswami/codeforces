// Problem: A. Optimal Purchase
// Contest: Codeforces - Educational Codeforces Round 190 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2230/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
/**
 *  Author: Ayushgiri
**/
 
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
	ll n,a,b;
	cin >> n >> a >> b;
    
    ll groupCost = min(3 * a, b);
    ll fullGroups = n / 3;
    ll leftover = n % 3;   
    ll leftoverCost = min(leftover * a, b);
 
    ll ans = fullGroups * groupCost + leftoverCost;
    cout << ans << "
";
 
 
	
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}