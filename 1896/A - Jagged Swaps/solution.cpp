// Problem: A. Jagged Swaps
// Contest: Codeforces - CodeTON Round 7 (Div. 1 + Div. 2, Rated, Prizes!)
// URL: https://codeforces.com/problemset/problem/1896/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
/**
 *  Author: Ayushgiri
**/
 
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
	int n;
	cin >> n;
	vector<int>v(n);
	 
	 for(int i=0;i<n;i++) cin >> v[i];
	 
	 if(v[0]==1)cout << "YES
";
	 else cout << "NO
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