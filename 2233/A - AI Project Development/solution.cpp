// Problem: A. AI Project Development
// Contest: Codeforces - Educational Codeforces Round 191 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2233/problem/A
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
	int n,x,y,z;
	cin >> n >> x >> y >> z;
	
	 
        long long t1 = (n + x + y - 1) / (x + y);
        
     
        long long t2 = LLONG_MAX;
        long long tA = (n + x - 1) / x;
        if(tA <= z) t2 = min(t2, tA);
        
       
        long long after = n - x * z;
        long long tB;
        if(after <= 0) tB = z;
        else tB = z + (after + x + 10*y - 1) / (x + 10*y);
        t2 = min(t2, tB);
        
        cout << min(t1, t2) << "
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